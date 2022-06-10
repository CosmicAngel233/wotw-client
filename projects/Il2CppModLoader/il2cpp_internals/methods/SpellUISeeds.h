#include <interception_macros.h>

namespace app::methods::SpellUISeeds {
    IL2CPP_REGISTER_METHOD(0x0094F260, void, FixedUpdate, (app::SpellUISeeds * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0094D540, bool, CanSpend, (app::SpellUISeeds * this_ptr, int32_t amount));
    IL2CPP_REGISTER_METHOD(0x0094F410, bool, Spend, (app::SpellUISeeds * this_ptr, int32_t amount));
    IL2CPP_REGISTER_METHOD(0x0094D720, void, __ctor, (app::SpellUISeeds * this_ptr));
}