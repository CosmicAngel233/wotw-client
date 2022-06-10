#include <interception_macros.h>

namespace app::methods::Moon::Timeline::Constraints::TimelineSolver {
    IL2CPP_REGISTER_METHOD(0x01BB66B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01BB6AE0, app::IDisposable *, OpenScope, (bool allow_evaluate, bool detect_infinite_loops, bool allow_cache))
    IL2CPP_REGISTER_METHOD(0x01BB6C90, void, ClearScope, ())
    IL2CPP_REGISTER_METHODINFO(0x0471DBD0, TimelineSolver_ClearScope__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BB6D50, float, ApproximateParentContentEnd, (app::ITimelineEntityParent * scope, float min_time))
    IL2CPP_REGISTER_METHOD(0x01BB7080, bool, EvaluateEvent, (app::ITimelineEntityParent * scope, app::EntityId id, int32_t event_id, float * time))
    IL2CPP_REGISTER_METHOD(0x01BB71A0, float, ApproximateEvent, (app::ITimelineEntityParent * scope, app::EntityId id, int32_t event_id))
    IL2CPP_REGISTER_METHODINFO(0x04703458, TimelineSolver_ApproximateEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BB7A40, float, ApproximateEntityStart, (app::ITimelineEntityParent * scope, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01BB7B30, float, ApproximateEntityStop, (app::ITimelineEntityParent * scope, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01BB7DA0, float, ApproximateContentEnd, (app::ITimelineEntityParent * scope, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01BB7FE0, float, ApproximateCustomEvent_1, (app::ITimelineEntityParent * scope, app::TimelineEntityRecord * record, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01BB8220, bool, ApproximateCustomEvent_2, (app::ITimelineEventProvider * provider, int32_t event_id, float min, float max, float * time))
}