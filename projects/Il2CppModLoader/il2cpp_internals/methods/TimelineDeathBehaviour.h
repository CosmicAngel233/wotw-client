#include <interception_macros.h>

namespace app::methods::TimelineDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::TimelineDeathBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x010F6440, void, OnEnterTask, (app::TimelineDeathBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x010F6800, void, OnExitTask, (app::TimelineDeathBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnDeathTimelineStopEvent, (app::TimelineDeathBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04743C00, TimelineDeathBehaviour_OnDeathTimelineStopEvent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::TimelineDeathBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (app::TimelineDeathBehaviour * this_ptr));
}