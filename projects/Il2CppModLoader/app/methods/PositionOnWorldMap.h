#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PositionOnWorldMap {
    IL2CPP_REGISTER_METHOD(0x00C68B30, void, FixedUpdate, (app::PositionOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PositionOnWorldMap * this_ptr))
}
