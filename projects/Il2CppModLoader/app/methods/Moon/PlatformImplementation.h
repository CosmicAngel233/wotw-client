#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::PlatformImplementation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::PlatformImplementation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, (app::PlatformImplementation * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlatformImplementation * this_ptr))
}
