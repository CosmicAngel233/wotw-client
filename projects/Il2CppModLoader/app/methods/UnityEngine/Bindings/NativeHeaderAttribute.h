#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Bindings::NativeHeaderAttribute {
    IL2CPP_REGISTER_METHOD(0x031BB220, void, ctor, (app::NativeHeaderAttribute * this_ptr, app::String * header))
    IL2CPP_REGISTER_METHODINFO(0x0473AFC8, NativeHeaderAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Header, (app::NativeHeaderAttribute * this_ptr, app::String * value))
}
