#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SceneLoadingQueue_QueueListComparer {
    IL2CPP_REGISTER_METHOD(0x00BA8850, int32_t, Compare, (app::SceneLoadingQueue_QueueListComparer * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad x, app::SceneLoadingQueue_QueueSceneToLoad y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneLoadingQueue_QueueListComparer * this_ptr))
}
