#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LightTorchIsSolidCondition {
    IL2CPP_REGISTER_METHOD(0x00FA2770, bool, Validate, (app::LightTorchIsSolidCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LightTorchIsSolidCondition * this_ptr))
}
