#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MistAction {
    IL2CPP_REGISTER_METHOD(0x013270E0, void, Perform, (app::MistAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005FC1E0, void, ctor, (app::MistAction * this_ptr))
}
