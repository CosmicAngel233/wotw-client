#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::XboxOneDVRManager {
    IL2CPP_REGISTER_METHOD(0x00597E70, void, Awake, (app::XboxOneDVRManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597F00, void, OnDestroy, (app::XboxOneDVRManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597F80, void, RecordPastDelayed, (float delay, float past, app::String * clip))
    IL2CPP_REGISTER_METHOD(0x005980B0, void, Update, (app::XboxOneDVRManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::XboxOneDVRManager * this_ptr))
}
