#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AK::Wwise::AuxBus {
    IL2CPP_REGISTER_METHOD(0x00417920, app::WwiseObjectType__Enum, get_WwiseObjectType, (app::AuxBus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, (app::AuxBus * this_ptr))
}
