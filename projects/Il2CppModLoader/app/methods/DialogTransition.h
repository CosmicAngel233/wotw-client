#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DialogTransition {
    IL2CPP_REGISTER_METHOD(0x00B91810, bool, Validate, (app::DialogTransition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DialogTransition * this_ptr))
}
