#include <interception_macros.h>

namespace app::methods::DamageDealerUnlessCarryingNightberry {
    IL2CPP_REGISTER_METHOD(0x00DC7DF0, void, Awake, (app::DamageDealerUnlessCarryingNightberry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DC7E70, void, DealDamage, (app::DamageDealerUnlessCarryingNightberry * this_ptr, app::GameObject * target, app::DamageOwner * damage_owner));
    IL2CPP_REGISTER_METHOD(0x00DC81B0, void, __ctor, (app::DamageDealerUnlessCarryingNightberry * this_ptr));
}
