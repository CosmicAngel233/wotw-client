#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TextMeshFloatSetter {
    IL2CPP_REGISTER_METHOD(0x010E8220, void, Start, (app::TextMeshFloatSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8310, void, FixedUpdate, (app::TextMeshFloatSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextMeshFloatSetter * this_ptr))
}
