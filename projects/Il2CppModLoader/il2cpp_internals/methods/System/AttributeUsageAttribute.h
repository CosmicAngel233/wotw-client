#include <interception_macros.h>

namespace app::methods::System::AttributeUsageAttribute {
    IL2CPP_REGISTER_METHOD(0x0229BB60, void, __ctor, (app::AttributeUsageAttribute * this_ptr, app::AttributeTargets__Enum valid_on));
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_AllowMultiple, (app::AttributeUsageAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_AllowMultiple, (app::AttributeUsageAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_Inherited, (app::AttributeUsageAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0229BB70, void, set_Inherited, (app::AttributeUsageAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0229BB80, void, __cctor, ());
}