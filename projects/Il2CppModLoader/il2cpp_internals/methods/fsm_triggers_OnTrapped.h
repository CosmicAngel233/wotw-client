#include <interception_macros.h>

namespace app::methods::fsm_triggers::OnTrapped {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_Amount, (app::OnTrapped * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_Amount, (app::OnTrapped * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, DamageType__Enum, get_DamageType, (app::OnTrapped * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_DamageType, (app::OnTrapped * this_ptr, app::DamageType__Enum value));
IL2CPP_REGISTER_METHOD(0x00A3F4E0, void, __ctor, (app::OnTrapped * this_ptr, float amount, app::DamageType__Enum damage_type));
}
