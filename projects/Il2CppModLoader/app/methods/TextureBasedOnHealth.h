#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TextureBasedOnHealth {
    IL2CPP_REGISTER_METHOD(0x010EAD70, void, Awake, (app::TextureBasedOnHealth * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EAE00, void, FixedUpdate, (app::TextureBasedOnHealth * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextureBasedOnHealth * this_ptr))
}
