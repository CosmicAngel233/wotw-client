#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Timeline::EventId {
    IL2CPP_REGISTER_METHOD(0x01BBD010, app::String *, GetName, (int32_t evt_key))
    IL2CPP_REGISTER_METHOD(0x01BBD0F0, void, cctor, ())
}
