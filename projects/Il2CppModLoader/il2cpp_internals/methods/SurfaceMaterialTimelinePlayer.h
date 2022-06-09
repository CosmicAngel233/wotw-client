#include <interception_macros.h>

namespace app::methods::SurfaceMaterialTimelinePlayer {
IL2CPP_REGISTER_METHOD(0x00672AD0, void, Update_1, (app::SurfaceMaterialTimelinePlayer * this_ptr, bool is_moving));
IL2CPP_REGISTER_METHOD(0x00672BD0, void, Update_2, (app::SurfaceMaterialTimelinePlayer * this_ptr, bool is_moving, app::SurfaceMaterialType__Enum surface_type));
IL2CPP_REGISTER_METHOD(0x00672CD0, void, ForceStopAllEffects, (app::SurfaceMaterialTimelinePlayer * this_ptr));
IL2CPP_REGISTER_METHOD(0x00672E80, MoonTimeline *, SpawnEffect, (app::SurfaceMaterialTimelinePlayer * this_ptr, app::SurfaceMaterialType__Enum surface_type));
IL2CPP_REGISTER_METHOD(0x006732E0, void, StartEffect, (app::SurfaceMaterialTimelinePlayer * this_ptr, app::SurfaceMaterialType__Enum surface_type));
IL2CPP_REGISTER_METHOD(0x00673440, void, StopEffect, (app::SurfaceMaterialTimelinePlayer * this_ptr, app::SurfaceMaterialType__Enum surface_type));
IL2CPP_REGISTER_METHOD(0x00673540, void, __ctor, (app::SurfaceMaterialTimelinePlayer * this_ptr));
}
