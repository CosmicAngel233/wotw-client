#pragma once
#include <interception_macros.h>

namespace app::methods::DifficultyCondition {
    IL2CPP_REGISTER_METHOD(0x00B91AA0, bool, Validate, (app::DifficultyCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DifficultyCondition * this_ptr))
}
