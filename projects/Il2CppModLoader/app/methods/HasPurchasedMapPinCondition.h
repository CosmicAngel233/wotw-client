#pragma once
#include <interception_macros.h>

namespace app::methods::HasPurchasedMapPinCondition {
    IL2CPP_REGISTER_METHOD(0x0109ED90, bool, Validate, (app::HasPurchasedMapPinCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasPurchasedMapPinCondition * this_ptr))
}
