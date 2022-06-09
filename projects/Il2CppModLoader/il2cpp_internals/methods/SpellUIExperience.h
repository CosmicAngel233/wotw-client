#include <interception_macros.h>

namespace app::methods::SpellUIExperience {
IL2CPP_REGISTER_METHOD(0x0094D2D0, void, Awake, (app::SpellUIExperience * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094D3D0, void, FixedUpdate, (app::SpellUIExperience * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094D540, bool, CanSpend, (app::SpellUIExperience * this_ptr, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0094D550, bool, Spend, (app::SpellUIExperience * this_ptr, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0094D720, void, __ctor, (app::SpellUIExperience * this_ptr));
}
