#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::OffsetEffector {
    IL2CPP_REGISTER_METHOD(0x022288B0, void, Start, (app::OffsetEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02228B50, void, OnModifyOffset, (app::OffsetEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::OffsetEffector * this_ptr))
}
