#pragma once
#include <interception_macros.h>

namespace app::methods::GlobalAlphaCutoffMenuItem {
    IL2CPP_REGISTER_METHOD(0x007F5460, void, ctor, (app::GlobalAlphaCutoffMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x007F5530, void, OnSelectedFixedUpdate, (app::GlobalAlphaCutoffMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
