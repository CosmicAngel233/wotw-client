#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PlayAnimation {
    IL2CPP_REGISTER_METHOD(0x02130880, void, OnEnable, (app::PlayAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02130900, void, OnDisable, (app::PlayAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02130930, void, ctor, (app::PlayAnimation * this_ptr))
}
