#include <features/scenes/scene_load.h>

#include <game/game.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/methods/ScenesManager.h>
#include <Il2CppModLoader/app/methods/SceneManagerScene.h>

#include <Il2CppModLoader/windows_api/console.h>
#include <set>
#include <unordered_set>

using namespace app::methods;

namespace scenes {
    struct PendingScene {
        std::string scene_name;
        std::vector<scene_loaded_callback> on_loaded_callbacks;
        bool keep_preloaded = false;
    };

    std::unordered_map<std::string, PendingScene> scenes_to_load;
    EventBus<SceneLoadEventMetadata *> scenes_event_bus;

    app::ScenesManager *scenes_manager_instance = nullptr;

    app::ScenesManager *get_scenes_manager() {
        if (scenes_manager_instance == nullptr) {
            const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
            scenes_manager_instance = scenes->static_fields->Manager;
        }

        return scenes_manager_instance;
    }

    namespace {
        IL2CPP_INTERCEPT(SceneManagerScene, void, ChangeState,
                         (app::SceneManagerScene * this_ptr, app::SceneState__Enum state)) {
            SceneManagerScene::ChangeState(this_ptr, state);

            auto scene_name_csstring = this_ptr->fields.MetaData->fields.Scene;
            auto scene_name = il2cpp::convert_csstring(scene_name_csstring);
            auto scenes_manager = get_scenes_manager();
            auto scene_meta = ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);
            auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(scenes_manager, scene_meta);

            modloader::win::console::console_send(format("%s: %d", scene_name.c_str(), state));
            modloader::win::console::console_flush();

            SceneLoadEventMetadata event{
                    .scene_name = scene_name,
                    .state = state,
                    .scene = scene_manager_scene,
            };
            scenes_event_bus.trigger_event(&event);

            if (state == app::SceneState__Enum::Loaded && scenes_to_load.contains(scene_name)) {
                auto pending_scene = scenes_to_load[scene_name];
                auto go = il2cpp::unity::get_game_object(scene_manager_scene->fields.SceneRoot);

                for (auto on_load_callback: pending_scene.on_loaded_callbacks)
                    on_load_callback(pending_scene.scene_name, go);

                scene_manager_scene->fields.PreventUnloading = pending_scene.keep_preloaded;

                scenes_to_load.erase(scene_name);
            }
        }
    } // namespace

    EventBus<SceneLoadEventMetadata *> &event_bus() {
        return scenes_event_bus;
    }

    app::RuntimeSceneMetaData *get_scene_metadata(std::string_view scene) {
        auto scenes_manager = get_scenes_manager();
        auto scene_name_csstring = il2cpp::string_new(scene);
        return ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);
    }

    bool scene_is_loading(std::string_view scene) {
        auto metadata = get_scene_metadata(scene);
        return ScenesManager::SceneIsLoading(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    bool scene_is_loaded(std::string_view scene) {
        auto metadata = get_scene_metadata(scene);
        return ScenesManager::SceneIsLoaded(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    void force_load_scene(std::string_view scene, scene_loaded_callback callback, bool keep_preloaded, bool async) {
        auto &scene_to_load = scenes_to_load[std::string(scene)];
        scene_to_load.scene_name = std::string(scene);
        scene_to_load.keep_preloaded = scene_to_load.keep_preloaded || keep_preloaded;

        if (callback != nullptr)
            scene_to_load.on_loaded_callbacks.push_back(callback);

        auto scenes_manager = get_scenes_manager();
        auto scene_name_csstring = il2cpp::string_new(scene_to_load.scene_name);
        auto scene_meta = ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);

        if (!ScenesManager::SceneIsLoading(scenes_manager, scene_meta->fields.SceneMoonGuid)) {
            ScenesManager::RequestAdditivelyLoadScene(scenes_manager, scene_meta, async, true, true, true, false);
        }
    }

    /**
     * Use with caution, can destroy things
     */
    void unload_all_scenes() {
        ScenesManager::UnloadAllScenes(get_scenes_manager());
    }

    void allow_unload_scene(std::string_view scene_name) {
        auto scene_metadata = get_scene_metadata(scene_name);
        if (scene_metadata != nullptr) {
            ScenesManager::UnsetPreventUnloading_2(get_scenes_manager(), scene_metadata);
        }
    }

    void unload_scene(std::string_view scene_name, bool instant) {
        auto scene = ScenesManager::GetSceneManagerScene(get_scenes_manager(), il2cpp::string_new(scene_name));
        if (scene != nullptr) {
            ScenesManager::UnloadScene(get_scenes_manager(), scene, true, instant);
        }
    }

    void remove_scene(std::string_view scene_name, bool instant) {
        auto scene = ScenesManager::GetSceneManagerScene(get_scenes_manager(), il2cpp::string_new(scene_name));
        if (scene != nullptr) {
            ScenesManager::RemoveScene(get_scenes_manager(), scene, instant);
        }
    }

    std::set<std::string> get_scenes_at_position(app::Vector3 position) {
        auto scenes_manager = get_scenes_manager();

        ScenesManager::QueryQuadTreeFast_1(scenes_manager, position,
                                           scenes_manager->klass->static_fields->m_tempHashList);

        std::set<std::string> scene_names;

        for (auto i = 0; i < scenes_manager->klass->static_fields->m_tempHashList->fields._size; i++) {
            auto scene_hash = scenes_manager->klass->static_fields->m_tempHashList->fields._items->vector[i];
            auto scene_metadata = scenes_manager->fields.m_linearScenesArray->vector[scene_hash];
            scene_names.emplace(il2cpp::convert_csstring(scene_metadata->fields.Scene));
        }

        return scene_names;
    }

    app::GameObject *get_root(std::string_view name) {
        const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        auto manager = scenes->static_fields->Manager;
        auto cname = il2cpp::string_new(name);
        auto meta = ScenesManager::GetSceneInformation(manager, cname);
        if (meta == nullptr || !ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid)) {
            auto container = game::container(game::RandoContainer::Randomizer);
            auto scene = UnityEngine::GameObject::get_scene(container);
            auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
            for (auto game_object: dont_destroy_on_load)
                if (il2cpp::unity::get_object_name(game_object) == name)
                    return game_object;

            return nullptr;
        }

        auto scene = ScenesManager::GetFromCurrentScenes_1(manager, meta);
        return il2cpp::unity::get_game_object(scene->fields.SceneRoot);
    }

    std::vector<app::GameObject *> get_roots_from_active() {
        std::vector<app::GameObject *> game_objects;
        const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        auto manager = scenes->static_fields->Manager;
        for (auto i = 0; i < manager->fields.ActiveScenes->fields._size; ++i) {
            auto scene = manager->fields.ActiveScenes->fields._items->vector[i];
            game_objects.push_back(il2cpp::unity::get_game_object(scene->fields.SceneRoot));
        }

        auto container = game::container(game::RandoContainer::Randomizer);
        auto scene = UnityEngine::GameObject::get_scene(container);
        auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
        game_objects.insert(game_objects.end(), dont_destroy_on_load.begin(), dont_destroy_on_load.end());

        return game_objects;
    }

    app::GameObject *get_game_object(std::string_view path) {
        if (path.empty())
            return nullptr;

        std::vector<std::string> split_path;
        std::string str(path);
        split_str(str, split_path, '/');
        auto game_object = get_root(split_path.front());
        split_path.erase(split_path.begin());
        return split_path.empty() ? game_object : il2cpp::unity::find_child(game_object, split_path);
    }

    app::SceneMetaData_SeinInitialValuesWotW *initial_values = nullptr;

    void load_default_values() {
        if (il2cpp::unity::is_valid(initial_values))
            il2cpp::invoke(initial_values, "ApplyInitialValues");
        else
            modloader::warn("scene_load", "Failed to set default wotw values.");
    }

    void on_load_spawn(std::string_view scene_name, app::GameObject *scene_root) {
        auto root = il2cpp::unity::get_component<app::SceneRoot>(scene_root, "", "SceneRoot");
        initial_values = root->fields.MetaData->fields.InitialValuesWisp;
    }

    void initialize() {
        force_load_scene("swampIntroTop", &on_load_spawn);
        // force_load_scene("wotwTitleScreen", nullptr, true);
        // force_load_scene("kuFlyAway", nullptr, true);
    }

    CALL_ON_INIT(initialize);
} // namespace scenes
