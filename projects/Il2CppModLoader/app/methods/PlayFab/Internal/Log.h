#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PlayFab::Internal::Log {
    IL2CPP_REGISTER_METHOD(0x01835C20, void, Debug, (app::String * text, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01835D60, void, Info, (app::String * text, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01835EA0, void, Warning, (app::String * text, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01835FE0, void, Error, (app::String * text, app::Object__Array * args))
}
