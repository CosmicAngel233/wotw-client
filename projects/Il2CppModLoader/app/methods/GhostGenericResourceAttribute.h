#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GhostGenericResourceAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Id, (app::GhostGenericResourceAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::GhostGenericResourceAttribute * this_ptr, int32_t id))
}
