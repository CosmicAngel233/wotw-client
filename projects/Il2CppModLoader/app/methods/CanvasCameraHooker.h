#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CanvasCameraHooker {
    IL2CPP_REGISTER_METHOD(0x00B22D50, void, Start, (app::CanvasCameraHooker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanvasCameraHooker * this_ptr))
}
