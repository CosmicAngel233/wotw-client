#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::UnSafeCharBuffer {
    IL2CPP_REGISTER_METHOD(0x00206930, void, ctor, (app::UnSafeCharBuffer__Boxed * this_ptr, uint16_t * buffer, int32_t buffer_size))
    IL2CPP_REGISTER_METHOD(0x00206940, void, AppendString, (app::UnSafeCharBuffer__Boxed * this_ptr, app::String * string_to_append))
    IL2CPP_REGISTER_METHODINFO(0x04794EF0, UnSafeCharBuffer_AppendString__MethodInfo)
}
