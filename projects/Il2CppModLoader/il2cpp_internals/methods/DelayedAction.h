#include <interception_macros.h>

namespace app::methods::DelayedAction {
    IL2CPP_REGISTER_METHOD(0x00B7FB70, float, get_DonePercentage, (app::DelayedAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::DelayedAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B7FB90, void, __ctor_2, (app::DelayedAction * this_ptr, app::DelayedAction_Action * action, float time_seconds));
    IL2CPP_REGISTER_METHOD(0x00B7FBC0, void, __ctor_3, (app::DelayedAction * this_ptr, app::DelayedAction_Action * action, int32_t frame_delay));
    IL2CPP_REGISTER_METHOD(0x00B7FBF0, void, __ctor_4, (app::DelayedAction * this_ptr, app::DelayedAction_Action * action, float time_seconds, app::Func_1_Boolean_ * condition, app::Component_1 * owner));
    IL2CPP_REGISTER_METHOD(0x00B7FC20, void, __ctor_5, (app::DelayedAction * this_ptr, app::DelayedAction_Action * action, int32_t frame_delay, app::Func_1_Boolean_ * condition, app::Component_1 * owner));
    IL2CPP_REGISTER_METHOD(0x00B7FC40, void, PerformDelayed, (app::DelayedAction * this_ptr, app::DelayedAction_Action * action));
    IL2CPP_REGISTER_METHOD(0x00B7FE10, void, Release, (app::DelayedAction * this_ptr, bool force_pending_action_to_run));
    IL2CPP_REGISTER_METHOD(0x00B7FE30, void, OnFixedUpdate, (app::DelayedAction * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474C190, DelayedAction_OnFixedUpdate__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00B7FFF0, void, CleanUp, (app::DelayedAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B801B0, void, PerformAction, (app::DelayedAction * this_ptr));
}
