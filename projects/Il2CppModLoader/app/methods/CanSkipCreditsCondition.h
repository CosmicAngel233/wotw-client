#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CanSkipCreditsCondition {
    IL2CPP_REGISTER_METHOD(0x00B220A0, bool, Validate, (app::CanSkipCreditsCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanSkipCreditsCondition * this_ptr))
}
