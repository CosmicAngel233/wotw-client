#pragma once
#include <interception_macros.h>

namespace app::methods::VibrationStrengthProvider {
    IL2CPP_REGISTER_METHOD(0x008BB780, float, GetFloatValue, (app::VibrationStrengthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VibrationStrengthProvider * this_ptr))
}
