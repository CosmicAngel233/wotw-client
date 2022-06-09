#include <interception_macros.h>

namespace app::methods::SeinStickyMineSpell {
    IL2CPP_REGISTER_METHOD(0x00A7E680, void, Awake, (app::SeinStickyMineSpell * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A7E6B0, app::AbilityType__Enum, get_AbilityType, (app::SeinStickyMineSpell * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A7E6C0, void, OnSetReferenceToSein, (app::SeinStickyMineSpell * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A7E790, void, SpawnGrenade, (app::SeinStickyMineSpell * this_ptr, app::Vector2 velocity, bool bashable, app::Vector3 position));
    IL2CPP_REGISTER_METHOD(0x00A7EB30, void, __ctor, (app::SeinStickyMineSpell * this_ptr));
}
