#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IKSimple {
    IL2CPP_REGISTER_METHOD(0x00B71990, void, Solve, (app::IKSimple * this_ptr, app::Transform__Array * bones, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x00B72FA0, void, ctor, (app::IKSimple * this_ptr))
}
