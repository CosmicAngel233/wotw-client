#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Race::CanRetryRaceCondition {
    IL2CPP_REGISTER_METHOD(0x00C3EF70, bool, Validate, (app::CanRetryRaceCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanRetryRaceCondition * this_ptr))
}
