#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TentacleTarget {
    IL2CPP_REGISTER_METHOD(0x010D7100, void, Update, (app::TentacleTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D7660, void, ctor, (app::TentacleTarget * this_ptr))
}
