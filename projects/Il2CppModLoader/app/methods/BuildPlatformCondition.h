#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BuildPlatformCondition {
    IL2CPP_REGISTER_METHOD(0x00815C90, bool, Validate, (app::BuildPlatformCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00815DB0, void, ctor, (app::BuildPlatformCondition * this_ptr))
}
