#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::CameraTargetSettings {
    IL2CPP_REGISTER_METHOD(0x0011D920, void, ctor, (app::CameraTargetSettings__Boxed * this_ptr, app::Vector3 target, app::Vector2 target_padding, float weight, app::ICameraTarget * camera_target))
}
