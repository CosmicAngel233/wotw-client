#include <interception_macros.h>

namespace app::methods::WindSpeedAnimator {
IL2CPP_REGISTER_METHOD(0x00578EE0, void, Start, (app::WindSpeedAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00579060, void, AnimateIt, (app::WindSpeedAnimator * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00579090, void, RestoreToOriginalState, (app::WindSpeedAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x005790B0, void, __ctor, (app::WindSpeedAnimator * this_ptr));
}
