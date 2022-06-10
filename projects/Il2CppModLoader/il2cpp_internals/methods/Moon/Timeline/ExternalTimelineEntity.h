#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ExternalTimelineEntity {
    IL2CPP_REGISTER_METHOD(0x01BBDF00, app::String *, get_FullAddress, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBDFF0, app::MoonTimeline *, get_ExternalTimeline, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBE100, void, SetTarget, (app::ExternalTimelineEntity * this_ptr, app::ITimelineEntity * target));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateEntity, (app::ExternalTimelineEntity * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x01BBE250, void, OnStartPlayback, (app::ExternalTimelineEntity * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01BBE470, void, OnStopPlayback, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBE540, void, OnPausePlayback, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBE630, void, OnResumePlayback, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBE720, app::List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBEA60, app::List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04747E98, ExternalTimelineEntity_get_ConstraintMetaDatas__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BBEAB0, app::List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBEC00, app::List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475EDB0, ExternalTimelineEntity_get_ExternalRecords__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BBEC50, float, get_CurrentTime, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBED40, void, RecursivelySetupExecutionOrder, (app::ExternalTimelineEntity * this_ptr, int32_t order));
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_ActiveTimeline, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBEFE0, bool, HasFinished, (app::ExternalTimelineEntity * this_ptr, int32_t event_id));
    IL2CPP_REGISTER_METHOD(0x01BBF0D0, app::List_1_Moon_MoonReference_1__2 *, get_Timelines, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BBF1E0, void, SynchronizeData, (app::ExternalTimelineEntity * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record));
    IL2CPP_REGISTER_METHOD(0x01BBF3F0, bool, ApproximateEvent, (app::ExternalTimelineEntity * this_ptr, int32_t evt, float * time));
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_TrimTime, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_TrimTime, (app::ExternalTimelineEntity * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_ShouldTrim, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B11500, void, set_ShouldTrim, (app::ExternalTimelineEntity * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::ITrimController *, get_TrimController, (app::ExternalTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_TrimController, (app::ExternalTimelineEntity * this_ptr, app::ITrimController * value));
    IL2CPP_REGISTER_METHOD(0x01BBF500, void, SetTrim, (app::ExternalTimelineEntity * this_ptr, float duration));
    IL2CPP_REGISTER_METHOD(0x01BBF510, void, __ctor, (app::ExternalTimelineEntity * this_ptr));
}