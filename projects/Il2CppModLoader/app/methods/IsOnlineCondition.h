#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IsOnlineCondition {
    IL2CPP_REGISTER_METHOD(0x006473B0, bool, Validate, (app::IsOnlineCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsOnlineCondition * this_ptr))
}
