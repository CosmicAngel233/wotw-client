#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinStatusAnimatorDriver {
    IL2CPP_REGISTER_METHOD(0x00A7E010, void, Start, (app::SeinStatusAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7E090, void, FixedUpdate, (app::SeinStatusAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7E110, float, GetValue, (app::SeinStatusAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7E650, void, ctor, (app::SeinStatusAnimatorDriver * this_ptr))
}
