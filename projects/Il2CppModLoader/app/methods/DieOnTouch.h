#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DieOnTouch {
    IL2CPP_REGISTER_METHOD(0x00B91930, void, OnTriggerEnter, (app::DieOnTouch * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DieOnTouch * this_ptr))
}
