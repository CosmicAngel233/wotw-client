#include <interception_macros.h>

namespace app::methods::MoonTelemetrySettingsEvent {
    IL2CPP_REGISTER_METHOD(0x01471C40, void, __ctor, (app::MoonTelemetrySettingsEvent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String *, get_Name, (app::MoonTelemetrySettingsEvent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01471E30, void, SerializeToObject, (app::MoonTelemetrySettingsEvent * this_ptr, app::JsonBuilder_Object obj));
}
