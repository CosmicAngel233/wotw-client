#include <interception_macros.h>

namespace app::methods::SpiderBatRestingToAttackingBehaviour {
    IL2CPP_REGISTER_METHOD(0x0095F0C0, void, OnEnter, (app::SpiderBatRestingToAttackingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0095F1A0, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBatRestingToAttackingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009555D0, void, OnExit, (app::SpiderBatRestingToAttackingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0095F1C0, void, OnEndTurningBehaviourEvent, (app::SpiderBatRestingToAttackingBehaviour * this_ptr, app::IEntityBehaviour * behaviour, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x0095F1D0, void, StartTimeline, (app::SpiderBatRestingToAttackingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095F3A0, void, OnTimelineSequenceStopEvent, (app::SpiderBatRestingToAttackingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FB50, SpiderBatRestingToAttackingBehaviour_OnTimelineSequenceStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0095F550, void, FixedUpdate, (app::SpiderBatRestingToAttackingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095F690, void, ctor, (app::SpiderBatRestingToAttackingBehaviour * this_ptr))
}