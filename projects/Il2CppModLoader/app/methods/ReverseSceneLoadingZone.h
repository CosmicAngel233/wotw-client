#pragma once
#include <interception_macros.h>

namespace app::methods::ReverseSceneLoadingZone {
    IL2CPP_REGISTER_METHOD(0x00910830, app::SceneRoot *, get_SceneRoot, (app::ReverseSceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910920, app::Rect, get_Rectangle, (app::ReverseSceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SelectableCategory__Enum, get_Category, (app::ReverseSceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ReverseSceneLoadingZone * this_ptr))
}
