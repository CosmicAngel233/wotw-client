#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ResetDamageRecieversAction {
    IL2CPP_REGISTER_METHOD(0x00904C80, void, Perform, (app::ResetDamageRecieversAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ResetDamageRecieversAction * this_ptr))
}
