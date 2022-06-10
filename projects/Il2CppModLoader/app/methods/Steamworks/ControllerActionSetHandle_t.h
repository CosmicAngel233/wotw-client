#include <interception_macros.h>

namespace app::methods::Steamworks::ControllerActionSetHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ControllerActionSetHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::ControllerActionSetHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F6B0, bool, Equals_1, (app::ControllerActionSetHandle_t__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::ControllerActionSetHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::ControllerActionSetHandle_t x, app::ControllerActionSetHandle_t y))
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, (app::ControllerActionSetHandle_t x, app::ControllerActionSetHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ControllerActionSetHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::ControllerActionSetHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::ControllerActionSetHandle_t__Boxed * this_ptr, app::ControllerActionSetHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::ControllerActionSetHandle_t__Boxed * this_ptr, app::ControllerActionSetHandle_t other))
    bool operator == (app::ControllerActionSetHandle_t x, app::ControllerActionSetHandle_t y) {
        return op_Equality(x, y);
    }
    bool operator != (app::ControllerActionSetHandle_t x, app::ControllerActionSetHandle_t y) {
        return op_Inequality(x, y);
    }
}