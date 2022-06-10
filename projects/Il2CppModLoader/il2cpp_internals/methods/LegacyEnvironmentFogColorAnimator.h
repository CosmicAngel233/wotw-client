#include <interception_macros.h>

namespace app::methods::LegacyEnvironmentFogColorAnimator {
    IL2CPP_REGISTER_METHOD(0x00A240A0, void, Start, (app::LegacyEnvironmentFogColorAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A24260, void, AnimateIt, (app::LegacyEnvironmentFogColorAnimator * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyEnvironmentFogColorAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005790B0, void, __ctor, (app::LegacyEnvironmentFogColorAnimator * this_ptr));
}