#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::FadingSound {
    IL2CPP_REGISTER_METHOD(0x00994270, void, Start, (app::FadingSound * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009943B0, void, ChangeVolume, (app::FadingSound * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FadingSound * this_ptr))
}
