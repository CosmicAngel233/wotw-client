#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Configuration::SettingsProvider {
    IL2CPP_REGISTER_METHOD(0x01FFE0B0, void, ctor, (app::SettingsProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781C10, SettingsProvider__ctor__MethodInfo)
}
