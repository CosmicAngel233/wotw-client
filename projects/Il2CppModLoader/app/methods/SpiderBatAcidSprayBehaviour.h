#include <interception_macros.h>

namespace app::methods::SpiderBatAcidSprayBehaviour {
    IL2CPP_REGISTER_METHOD(0x00953E70, void, OnEnter, (app::SpiderBatAcidSprayBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00954170, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBatAcidSprayBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00954230, void, OnExit, (app::SpiderBatAcidSprayBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00954540, void, StartShoot, (app::SpiderBatAcidSprayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D730, SpiderBatAcidSprayBehaviour_StartShoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00954550, void, StopShoot, (app::SpiderBatAcidSprayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F250, SpiderBatAcidSprayBehaviour_StopShoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00954560, void, OnEndTurningBehaviourEvent, (app::SpiderBatAcidSprayBehaviour * this_ptr, app::IEntityBehaviour * behaviour, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00954570, void, StartTimeline, (app::SpiderBatAcidSprayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00954740, void, OnTimelineSequenceStopEvent, (app::SpiderBatAcidSprayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F138, SpiderBatAcidSprayBehaviour_OnTimelineSequenceStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00954940, void, Shoot, (app::SpiderBatAcidSprayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00955230, void, ctor, (app::SpiderBatAcidSprayBehaviour * this_ptr))
}