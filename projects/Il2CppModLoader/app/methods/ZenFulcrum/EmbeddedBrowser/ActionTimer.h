#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::ActionTimer {
    IL2CPP_REGISTER_METHOD(0x01C60770, void, OnTriggerEnter, (app::ActionTimer * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x01C60980, app::IEnumerator *, DoThings, (app::ActionTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActionTimer * this_ptr))
}
