#pragma once
#include <interception_macros.h>

namespace app::methods::CharacterGlow {
    IL2CPP_REGISTER_METHOD(0x01051140, void, Start, (app::CharacterGlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051410, void, FixedUpdate, (app::CharacterGlow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CharacterGlow * this_ptr))
}
