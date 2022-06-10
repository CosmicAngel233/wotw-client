#pragma once
#include <interception_macros.h>

namespace app::methods::GUICamera {
    IL2CPP_REGISTER_METHOD(0x0151D640, void, Update, (app::GUICamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0151D7B0, app::Vector3, ScreenToWorldPoint, (app::GUICamera * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GUICamera * this_ptr))
}
