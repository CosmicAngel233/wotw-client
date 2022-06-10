#include <interception_macros.h>

namespace app::methods::KwolokBossDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x01252360, app::KwolokBossEntity *, get_Kwolok, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01252430, app::KwolokBossLocomotion *, get_Locomotion, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01252510, void, OnEnterTask, (app::KwolokBossDeathReactionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01252B30, app::BehaviourStatus__Enum, OnExecuteTask, (app::KwolokBossDeathReactionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01252CA0, void, OnExitTask, (app::KwolokBossDeathReactionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01253210, void, TryAddMoveRequest, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253360, void, OnMoveWindowStarted, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472FE80, KwolokBossDeathReactionBehaviour_OnMoveWindowStarted__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01253370, void, AddCallbacks, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253650, void, RemoveCallbacks, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253930, void, StopAllTimelines, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253990, void, OnHitEnded, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04772488, KwolokBossDeathReactionBehaviour_OnHitEnded__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01253A10, void, OnEscapeEnded, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04711B98, KwolokBossDeathReactionBehaviour_OnEscapeEnded__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01253A90, void, ChangeState, (app::KwolokBossDeathReactionBehaviour * this_ptr, app::KwolokBossDeathReactionBehaviour_State__Enum new_state));
    IL2CPP_REGISTER_METHOD(0x01253B60, void, UpdateState, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253B70, void, EnterStateHit, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253BA0, void, EnterStateLoop, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01042E70, void, EnterStateEscape, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C0C910, void, ExitStateHit, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253D80, void, ExitStateLoop, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F15500, void, ExitStateEscape, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateStateLoop, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01253F50, void, OnLoopStopped, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477DE38, KwolokBossDeathReactionBehaviour_OnLoopStopped__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01254070, void, ClearMoveRequest, (app::KwolokBossDeathReactionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012540D0, void, ModifyMaxMovementSpeed, (app::KwolokBossDeathReactionBehaviour * this_ptr, float * speed));
    IL2CPP_REGISTER_METHODINFO(0x04761030, KwolokBossDeathReactionBehaviour_ModifyMaxMovementSpeed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01251800, void, ModifyDesiredLookAngle, (app::KwolokBossDeathReactionBehaviour * this_ptr, float * angle));
    IL2CPP_REGISTER_METHODINFO(0x04796648, KwolokBossDeathReactionBehaviour_ModifyDesiredLookAngle__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x012540E0, void, ModifyCameraTargets, (app::KwolokBossDeathReactionBehaviour * this_ptr, app::List_1_Moon_CameraTargetSettings_ * targets));
    IL2CPP_REGISTER_METHODINFO(0x0478EA00, KwolokBossDeathReactionBehaviour_ModifyCameraTargets__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x012541B0, void, __ctor, (app::KwolokBossDeathReactionBehaviour * this_ptr));
}