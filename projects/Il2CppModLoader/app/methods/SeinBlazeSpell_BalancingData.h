#include <interception_macros.h>

namespace app::methods::SeinBlazeSpell_BalancingData {
    IL2CPP_REGISTER_METHOD(0x00D94750, bool, get_IsChargeUnlocked, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::SeinBlazeSpell_BalancingData_BlazeSettings *, GetCurrentBlazeSettings, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94830, float, get_BlazeCost, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94850, float, get_FullBlazeCost, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94870, float, get_BlazeReleaseDamage, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94890, float, get_FullBlazeReleaseDamage, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D948B0, float, get_BlazeDamageAmount, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D948D0, float, get_BlazeDamageInterval, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D948F0, float, get_BlazeDamageDuration, (app::SeinBlazeSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::SeinBlazeSpell_BalancingData * this_ptr))
}