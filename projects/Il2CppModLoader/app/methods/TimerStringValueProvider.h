#pragma once
#include <interception_macros.h>

namespace app::methods::TimerStringValueProvider {
    IL2CPP_REGISTER_METHOD(0x010F8600, app::String *, GetStringValue, (app::TimerStringValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimerStringValueProvider * this_ptr))
}
