#include <interception_macros.h>

namespace app::methods::CameraOffsetAnimator {
    IL2CPP_REGISTER_METHOD(0x01696D20, void, Restart, (app::CameraOffsetAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01696D40, void, AnimateIt, (app::CameraOffsetAnimator * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::CameraOffsetAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005790B0, void, __ctor, (app::CameraOffsetAnimator * this_ptr));
}
