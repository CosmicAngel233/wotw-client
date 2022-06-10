#pragma once
#include <interception_macros.h>

namespace app::methods::MoonTelemetrySpawnEvent {
    IL2CPP_REGISTER_METHOD(0x01472DB0, void, ctor, (app::MoonTelemetrySpawnEvent * this_ptr, app::MoonTelemetrySpawnEvent_SpawnReason__Enum reason))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String *, get_Name, (app::MoonTelemetrySpawnEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01472E90, void, SerializeToObject, (app::MoonTelemetrySpawnEvent * this_ptr, app::JsonBuilder_Object obj))
}
