#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LeverCondition {
    IL2CPP_REGISTER_METHOD(0x01137C20, bool, Validate, (app::LeverCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LeverCondition * this_ptr))
}
