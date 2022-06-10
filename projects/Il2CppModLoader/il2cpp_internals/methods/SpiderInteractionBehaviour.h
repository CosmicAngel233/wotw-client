#include <interception_macros.h>

namespace app::methods::SpiderInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x011BD6A0, app::Quest *, get_SpiderlingQuest, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011BD880, void, OnEntityInitialized, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011BD9A0, void, OnEnter, (app::SpiderInteractionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x011BDE80, app::BehaviourStatus__Enum, OnExecute, (app::SpiderInteractionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x011BDF50, void, OnExit, (app::SpiderInteractionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x011BE390, void, ChangeState, (app::SpiderInteractionBehaviour * this_ptr, app::SpiderInteractionBehaviour_InteractionStates__Enum state));
    IL2CPP_REGISTER_METHODINFO(0x04725200, SpiderInteractionBehaviour_ChangeState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x011BE4A0, void, Introduction, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011BE4A0, void, GiveSpiderlingQuest, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011BE4A0, void, SpiderlingRetalk, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011BE4C0, void, Idle, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011BE4E0, void, PlayTimeline, (app::SpiderInteractionBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_finished));
    IL2CPP_REGISTER_METHOD(0x011BE640, void, OnIntroductionDialogStarts, (app::SpiderInteractionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04730890, SpiderInteractionBehaviour_OnIntroductionDialogStarts__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x011BE6D0, void, OnIntroductionDialogFinishes, (app::SpiderInteractionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04734510, SpiderInteractionBehaviour_OnIntroductionDialogFinishes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x011BE810, void, OnSpiderlingRetalkStarts, (app::SpiderInteractionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0478C348, SpiderInteractionBehaviour_OnSpiderlingRetalkStarts__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderInteractionBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (app::SpiderInteractionBehaviour * this_ptr));
}