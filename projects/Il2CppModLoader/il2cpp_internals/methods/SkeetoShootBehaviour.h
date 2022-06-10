#include <interception_macros.h>

namespace app::methods::SkeetoShootBehaviour {
    IL2CPP_REGISTER_METHOD(0x006B0760, app::SkeetoLocomotion *, get_Locomotion, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B0840, app::Entity *, get_Owner, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B08C0, app::Vector3, get_AimPosition, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B0A20, void, OnEnter, (app::SkeetoShootBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x006B0E70, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoShootBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x006B1200, void, OnExit, (app::SkeetoShootBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x006B1620, void, EndBehaviour, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471E618, SkeetoShootBehaviour_EndBehaviour__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x006B1670, void, ChangeState, (app::SkeetoShootBehaviour * this_ptr, app::SkeetoShootBehaviour_State__Enum state));
    IL2CPP_REGISTER_METHOD(0x006B1960, void, OnEnterFlipTowardsTarget, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B1970, void, UpdateFlipTowardsTarget, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitFlipTowardsTarget, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B19D0, void, EnterPreShootState, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B1D60, void, UpdatePreShootState, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B2210, void, ExitPreShootState, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B23F0, void, EnterPostShootState, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B2540, void, UpdatePostShootState, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B26C0, void, ExitPostShootState, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B2770, void, ShootProjectile, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04763DD8, SkeetoShootBehaviour_ShootProjectile__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x006B2FD0, void, PlayTimeline, (app::SkeetoShootBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnInterrupted, (app::SkeetoShootBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04770E68, SkeetoShootBehaviour_OnInterrupted__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x006B33D0, void, __ctor, (app::SkeetoShootBehaviour * this_ptr));
}