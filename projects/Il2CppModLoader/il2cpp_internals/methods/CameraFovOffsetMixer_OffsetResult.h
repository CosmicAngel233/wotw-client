#include <interception_macros.h>

namespace app::methods::CameraFovOffsetMixer_OffsetResult {
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, get_AdditiveFieldOfView, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_AdditiveFieldOfView, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_ZCenter, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_ZCenter, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00114120, bool, get_IsEmpty, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00119DF0, void, set_IsEmpty, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0013B960, app::Vector3, ZDisplacementFrom, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr, app::Vector3 current_position, float current_fov));
    IL2CPP_REGISTER_METHOD(0x0013B9B0, float, GetZFactor, (app::CameraFovOffsetMixer_OffsetResult__Boxed * this_ptr, float old_fov, float new_fov));
}