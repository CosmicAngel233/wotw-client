#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::UserControlInteractions {
    IL2CPP_REGISTER_METHOD(0x0204A740, void, Update, (app::UserControlInteractions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204AA00, void, OnGUI, (app::UserControlInteractions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204ABB0, void, ctor, (app::UserControlInteractions * this_ptr))
}
