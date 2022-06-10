#include <interception_macros.h>

namespace app::methods::Moon::IKLimb {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IKSolverHeuristic *, get_Solver, (app::IKLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::IKLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FB630, void, OnAddedToAnimator, (app::IKLimb * this_ptr, app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x010FBFB0, void, OnRemovedFromAnimator, (app::IKLimb * this_ptr, app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x010FC060, void, OnDrawGizmosSelected, (app::IKLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FCB90, float, ComputeGroundWeight, (app::IKLimb * this_ptr, app::Vector3 local_position))
    IL2CPP_REGISTER_METHOD(0x010FCD10, bool, Cast, (app::IKLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FD320, void, Process, (app::IKLimb * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010FE490, void, ctor, (app::IKLimb * this_ptr))
}