#pragma once
#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::ExpandString {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ExpandString * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, ToString, (app::ExpandString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023AE610, app::String *, Expand, (app::ExpandString * this_ptr))
}
