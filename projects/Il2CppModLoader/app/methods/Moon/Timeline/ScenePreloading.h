#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ScenePreloading {
    IL2CPP_REGISTER_METHOD(0x00784150, app::FixedDurationSceneEntity *, GetNextSceneEntity_1, (app::MoonTimeline * timeline, app::TimelineEntity * preloading_entity))
    IL2CPP_REGISTER_METHOD(0x00784210, app::FixedDurationSceneEntity *, GetNextSceneEntity_2, (app::MoonTimeline * timeline, app::List_1_Moon_Timeline_FixedDurationSceneEntity_ * entities, app::TimelineEntity * preloading_entity))
    IL2CPP_REGISTER_METHOD(0x00784800, app::List_1_Moon_Timeline_TimelineEntityRecord_ *, GetFixedDurationSceneEntities, (app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x00784A80, app::TimelineEntityRecord *, GetSceneEntityOfClip, (app::MoonTimeline * timeline, app::TimelineEntity * entity))
    IL2CPP_REGISTER_METHOD(0x00784D70, app::FixedDurationSceneEntity *, ReturnResult, (app::TimelineEntityRecord * entity_record))
    IL2CPP_REGISTER_METHOD(0x00784EA0, void, cctor, ())
}