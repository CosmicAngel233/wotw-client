#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::FBIKBoxing {
    IL2CPP_REGISTER_METHOD(0x02219D10, void, Start, (app::FBIKBoxing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02219DA0, void, LateUpdate, (app::FBIKBoxing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FBIKBoxing * this_ptr))
}
