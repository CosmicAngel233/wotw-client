#include <interception_macros.h>

namespace app::methods::fsm::StateConfigurator {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::StateConfigurator_1 * this_ptr, app::StateMachine_2 * state_machine, app::IState_2 * state));
    IL2CPP_REGISTER_METHOD(0x00F6EA20, app::StateConfigurator_1 *, AddEvent, (app::StateConfigurator_1 * this_ptr, int32_t event_id, app::Action * action));
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_1, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_2, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_3, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04728648, StateConfigurator_1_AddTransition_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_4, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04759A30, StateConfigurator_1_AddTransition_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_5, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0470D2E0, StateConfigurator_1_AddTransition_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_6, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x047347A0, StateConfigurator_1_AddTransition_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_7, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0471F248, StateConfigurator_1_AddTransition_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_8, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04773018, StateConfigurator_1_AddTransition_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_9, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04746130, StateConfigurator_1_AddTransition_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_10, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0474B280, StateConfigurator_1_AddTransition_9__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_11, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04783FD0, StateConfigurator_1_AddTransition_10__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_12, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04780488, StateConfigurator_1_AddTransition_11__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_13, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04785850, StateConfigurator_1_AddTransition_12__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_14, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0471ED00, StateConfigurator_1_AddTransition_13__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_15, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04702490, StateConfigurator_1_AddTransition_14__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF91A0, app::StateConfigurator_1 *, AddTransition_16, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::Func_1_Boolean_ * condition, app::Action * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0475D338, StateConfigurator_1_AddTransition_15__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF9060, app::StateConfigurator_1 *, AddTransition_17, (app::StateConfigurator_1 * this_ptr, app::IState_2 * to, app::ICondition * condition, app::IAction * action, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04756F18, StateConfigurator_1_AddTransition_16__MethodInfo);
}