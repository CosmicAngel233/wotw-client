#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CollisionFilter {
    IL2CPP_REGISTER_METHOD(0x012D08F0, void, Awake, (app::CollisionFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D0980, void, OnCollisionEnter, (app::CollisionFilter * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CollisionFilter * this_ptr))
}
