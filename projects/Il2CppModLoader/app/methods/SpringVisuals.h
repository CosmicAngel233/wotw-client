#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SpringVisuals {
    IL2CPP_REGISTER_METHOD(0x009A9D50, void, OnCollisionEnter, (app::SpringVisuals * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpringVisuals * this_ptr))
}
