#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ScaleToTextBox {
    IL2CPP_REGISTER_METHOD(0x009343B0, void, FixedUpdate, (app::ScaleToTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009343C0, void, UpdateSize, (app::ScaleToTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScaleToTextBox * this_ptr))
}
