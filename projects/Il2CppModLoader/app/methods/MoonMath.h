#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MoonMath {
    IL2CPP_REGISTER_METHOD(0x02573FA0, float, Pulsate, (float from, float to, float frequence, float time))
    IL2CPP_REGISTER_METHOD(0x025740B0, int32_t, Hash, (int32_t item1, int32_t item2))
}
