#include <interception_macros.h>

namespace app::methods::RotationAnimator {
    IL2CPP_REGISTER_METHOD(0x01370EF0, void, CacheOriginals, (app::RotationAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01371000, void, SampleValue, (app::RotationAnimator * this_ptr, float value, bool force_sample));
    IL2CPP_REGISTER_METHOD(0x013711C0, void, RestoreToOriginalState, (app::RotationAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::RotationAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011135D0, app::Vector3, get_OriginalRotation, (app::RotationAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::RotationAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (app::RotationAnimator * this_ptr));
}