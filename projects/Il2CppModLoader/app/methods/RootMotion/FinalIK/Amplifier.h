#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Amplifier {
    IL2CPP_REGISTER_METHOD(0x0204E290, void, OnModifyOffset, (app::Amplifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::Amplifier * this_ptr))
}
