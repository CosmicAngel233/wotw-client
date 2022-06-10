#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::DamageDataPoint {
    IL2CPP_REGISTER_METHOD(0x00E32500, void, __ctor, (app::DamageDataPoint * this_ptr, app::String * player_key, app::String * session_key, app::String * time, app::String * level, app::DataPointType__Enum type, app::Vector3 position, float damage_taken, app::String * damager_name));
    IL2CPP_REGISTER_METHOD(0x00E32550, app::String *, ToString, (app::DamageDataPoint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetFloatValue, (app::DamageDataPoint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetSecondaryFloatValue, (app::DamageDataPoint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, GetStringValue, (app::DamageDataPoint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, GetSecondaryStringValue, (app::DamageDataPoint * this_ptr));
}