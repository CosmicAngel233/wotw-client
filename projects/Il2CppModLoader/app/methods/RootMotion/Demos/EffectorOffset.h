#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::EffectorOffset {
    IL2CPP_REGISTER_METHOD(0x02217AD0, void, OnModifyOffset, (app::EffectorOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::EffectorOffset * this_ptr))
}
