#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::frameworks::xboxLive::PlatformStorageEventHandlerFactory {
    IL2CPP_REGISTER_METHOD(0x00F6B3F0, app::IPlatformStorageEventHandler *, Get, (app::String * source_key))
}
