#pragma once
#include <interception_macros.h>

namespace app::methods::MaskedValueBar {
    IL2CPP_REGISTER_METHOD(0x00A11480, void, Awake, (app::MaskedValueBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A11510, void, FixedUpdate, (app::MaskedValueBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A116D0, void, ctor, (app::MaskedValueBar * this_ptr))
}
