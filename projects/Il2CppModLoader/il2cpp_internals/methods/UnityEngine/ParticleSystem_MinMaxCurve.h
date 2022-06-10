#include <interception_macros.h>

namespace app::methods::UnityEngine::ParticleSystem_MinMaxCurve {
    IL2CPP_REGISTER_METHOD(0x00248700, void, __ctor_1, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr, float constant));
    IL2CPP_REGISTER_METHOD(0x00248720, void, __ctor_2, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr, float multiplier, app::AnimationCurve * curve));
    IL2CPP_REGISTER_METHOD(0x00248740, void, __ctor_3, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr, float min, float max));
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_curveMultiplier, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_curveMultiplier, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x002446A0, float, get_constantMax, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00122E20, void, set_constantMax, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x001F2880, float, get_constantMin, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0010FB20, void, set_constantMin, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x002446A0, float, get_constant, (app::ParticleSystem_MinMaxCurve__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x031353E0, app::ParticleSystem_MinMaxCurve, op_Implicit, (float constant));
}