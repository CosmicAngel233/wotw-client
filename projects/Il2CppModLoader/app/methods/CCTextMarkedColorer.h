#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CCTextMarkedColorer {
    IL2CPP_REGISTER_METHOD(0x03161A10, void, Modify, (app::CCTextMarkedColorer * this_ptr, app::CCText * text))
    IL2CPP_REGISTER_METHOD(0x03161D90, void, ctor, (app::CCTextMarkedColorer * this_ptr))
}
