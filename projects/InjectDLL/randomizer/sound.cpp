#include <randomizer/sound.h>

#include <Common/ext.h>

#include <Il2CppModLoader/app/methods/AkSoundEngine.h>
#include <Il2CppModLoader/app/methods/Moon/Wwise/ArtificialSoundHostReference.h>
#include <Il2CppModLoader/app/methods/Moon/Wwise/WwiseEventSystem.h>
#include <Il2CppModLoader/app/methods/Moon/Wwise/WwiseEventSystem_SoundHandle.h>
#include <Il2CppModLoader/app/methods/Moon/Wwise/WwiseGameObjectSystem.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <magic_enum/include/magic_enum.hpp>

#include <fstream>
#include <string>
#include <unordered_map>

namespace randomizer {
    namespace sound {
        std::unordered_map<std::string, SoundEventID> string_to_event = {
            { "Catching", SoundEventID::Catching }
        };

        app::Event_1* create_event(SoundEventID id) {
            auto evt = il2cpp::create_object<app::Event_1>("AK.Wwise", "Event");
            il2cpp::invoke(evt, ".ctor");
            evt->fields._.forceId = true;
            evt->fields._.forcedId = static_cast<uint32_t>(id);
            return evt;
        }

        std::unordered_map<std::string, std::vector<unsigned char>> banks;
        void load_bank(std::string_view name, std::string_view path) {
            std::ifstream input(std::string(path), std::ios::binary);
            banks[std::string(name)] = std::vector<unsigned char>(std::istreambuf_iterator<char>(input), {});
            auto& data = banks[std::string(name)];
            uint32_t bank_id = 0;
            app::IntPtr data_ptr;
            data_ptr.m_value = reinterpret_cast<app::Void*>(data.data());
            auto out = AkSoundEngine::LoadAndDecodeBankFromMemory(data_ptr, data.size(), true, il2cpp::string_new("WotwRando"), false, &bank_id);
        }

        app::WwiseEventSystem_SoundHandle play_sound(SoundEventID event_id, app::ISoundHost* host) {
            auto wwise = il2cpp::get_class<app::Wwise__Class>("Moon.Wwise", "Wwise");
            auto wes = wwise->static_fields->m_eventsSystem;
            if (host == nullptr)
                host = reinterpret_cast<app::ISoundHost*>(wwise->static_fields->_DefaultDevSoundHost_k__BackingField);

            auto evt = create_event(event_id);
            auto handle = WwiseEventSystem::AllocateHandle(wes, evt, host);
            auto boxed = il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(il2cpp::get_class("Moon.Wwise", "WwiseEventSystem.SoundHandle"), handle);
            WwiseEventSystem::SoundHandle::Play(boxed);
            return handle;
        }

        std::string artificial_host_name_template("randomizer_artificial_host_");
        int artificial_host_id = 1;
        void play_sound_at(SoundEventID event_id, app::Vector3 location) {
            auto wwise = il2cpp::get_class<app::Wwise__Class>("Moon.Wwise", "Wwise");
            auto go_system = wwise->static_fields->m_gameObjectSystem;

            auto evt = create_event(event_id);
            auto name = il2cpp::string_new(artificial_host_name_template + std::to_string(artificial_host_id++));
            WwiseGameObjectSystem::FireAndForget(go_system, name, evt, &location);
        }

        void initialize() {
            modloader::info("sound", format("WWise version '%d.%d'", AkSoundEngine::GetMajorMinorVersion(), AkSoundEngine::GetSubminorBuildVersion()));
            modloader::info("sound", format("WWise soundbank version '%d'", AkSoundEngine::get_AK_SOUNDBANK_VERSION()));

            load_bank("WotwRando", modloader::base_path + "assets/sounds/WotwRando.bnk");
        }

        CALL_ON_INIT(initialize);
    } // namespace sound

    SoundActor::SoundActor(app::GameObject* parent) {
        m_root = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
        il2cpp::invoke(m_root, ".ctor");
        m_host = il2cpp::unity::add_component<app::SoundHost>(m_root, "Moon.Wwise", "SoundHost");
        m_host->fields.m_gameObject = m_root;
        m_host->fields.m_transform = il2cpp::unity::get_transform(m_root);
        m_host->fields.m_isListener = false;
        m_host->fields.SyncPosition = true;
        il2cpp::unity::set_active(m_root, true);
    }

    SoundActor::~SoundActor() {
        il2cpp::unity::destroy_object(m_root);
    }

    app::WwiseEventSystem_EventStatus__Enum SoundActor::status() {
        auto boxed = il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(il2cpp::get_class("Moon.Wwise", "WwiseEventSystem.SoundHandle"), m_sound);
        return sound::WwiseEventSystem::SoundHandle::get_Status(boxed);
    }

    void SoundActor::play(SoundEventID event_id) {
        auto wwise = il2cpp::get_class<app::Wwise__Class>("Moon.Wwise", "Wwise");
        auto wes = wwise->static_fields->m_eventsSystem;
        auto evt = sound::create_event(event_id);
        m_sound = sound::WwiseEventSystem::AllocateHandle(wes, evt, reinterpret_cast<app::ISoundHost*>(m_host));
        auto boxed = il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(il2cpp::get_class("Moon.Wwise", "WwiseEventSystem.SoundHandle"), m_sound);
        sound::WwiseEventSystem::SoundHandle::Play(boxed);
    }

    void SoundActor::pause() {
        auto boxed = il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(il2cpp::get_class("Moon.Wwise", "WwiseEventSystem.SoundHandle"), m_sound);
        sound::WwiseEventSystem::SoundHandle::Pause(boxed, 0, app::AkCurveInterpolation__Enum::AkCurveInterpolation_Linear);
    }

    void SoundActor::resume() {
        auto boxed = il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(il2cpp::get_class("Moon.Wwise", "WwiseEventSystem.SoundHandle"), m_sound);
        sound::WwiseEventSystem::SoundHandle::Resume(boxed, 0, app::AkCurveInterpolation__Enum::AkCurveInterpolation_Linear);
    }

    void SoundActor::stop() {
        auto boxed = il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(il2cpp::get_class("Moon.Wwise", "WwiseEventSystem.SoundHandle"), m_sound);
        sound::WwiseEventSystem::SoundHandle::Stop(boxed, 0, app::AkCurveInterpolation__Enum::AkCurveInterpolation_Linear);
    }
} // namespace randomizer

INJECT_C_DLLEXPORT void play_sound(SoundEventID event_id, app::Vector3 position) {
    randomizer::sound::play_sound_at(event_id, position);
}

INJECT_C_DLLEXPORT void play_sound_str(const char* event_name, app::Vector3 position) {
    auto event_id = randomizer::sound::string_to_event.find(event_name);
    if (event_id != randomizer::sound::string_to_event.end())
        randomizer::sound::play_sound_at(event_id->second, position);
}
