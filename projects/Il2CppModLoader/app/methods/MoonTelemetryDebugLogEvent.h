#pragma once
#include <interception_macros.h>

namespace app::methods::MoonTelemetryDebugLogEvent {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String *, get_Name, (app::MoonTelemetryDebugLogEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146F290, void, SerializeToObject, (app::MoonTelemetryDebugLogEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x0146F360, void, ctor, (app::MoonTelemetryDebugLogEvent * this_ptr))
}
