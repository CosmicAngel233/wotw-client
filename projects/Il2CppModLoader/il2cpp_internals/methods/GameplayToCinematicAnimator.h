#include <interception_macros.h>

namespace app::methods::GameplayToCinematicAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::CameraPuppetController *, get_Puppet, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00415E70, void, CacheOriginals, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00415F40, void, Awake, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004160E0, void, OnDestroy, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00416280, void, OnGameReset, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477EE50, GameplayToCinematicAnimator_OnGameReset__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00416350, void, SampleValue, (app::GameplayToCinematicAnimator * this_ptr, float value, bool force_sample));
    IL2CPP_REGISTER_METHOD(0x00416620, float, get_Duration, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004166C0, void, RestoreToOriginalState, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::GameplayToCinematicAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00416880, void, __ctor, (app::GameplayToCinematicAnimator * this_ptr));
}