#include <interception_macros.h>

namespace app::methods::Steamworks::HTTPCookieContainerHandle {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::HTTPCookieContainerHandle__Boxed * this_ptr, uint32_t value));
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::HTTPCookieContainerHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001320B0, bool, Equals_1, (app::HTTPCookieContainerHandle__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HTTPCookieContainerHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::HTTPCookieContainerHandle x, app::HTTPCookieContainerHandle y));
    IL2CPP_REGISTER_METHOD(0x015FBC00, bool, op_Inequality, (app::HTTPCookieContainerHandle x, app::HTTPCookieContainerHandle y));
    IL2CPP_REGISTER_METHOD(0x006CE970, app::HTTPCookieContainerHandle, op_Explicit_1, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, (app::HTTPCookieContainerHandle that));
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HTTPCookieContainerHandle__Boxed * this_ptr, app::HTTPCookieContainerHandle other));
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::HTTPCookieContainerHandle__Boxed * this_ptr, app::HTTPCookieContainerHandle other));
    IL2CPP_REGISTER_METHOD(0x015FBCA0, void, __cctor, ());
    bool operator == (app::HTTPCookieContainerHandle x, app::HTTPCookieContainerHandle y) {
        return op_Equality(x, y);
    }
    bool operator != (app::HTTPCookieContainerHandle x, app::HTTPCookieContainerHandle y) {
        return op_Inequality(x, y);
    }
}