#include <interception_macros.h>

namespace app::methods::System::Dynamic::BindingRestrictions_TypeRestriction {
    IL2CPP_REGISTER_METHOD(0x01F8A5D0, void, __ctor, (app::BindingRestrictions_TypeRestriction * this_ptr, app::Expression * parameter, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01F8A680, bool, Equals, (app::BindingRestrictions_TypeRestriction * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01F8A760, int32_t, GetHashCode, (app::BindingRestrictions_TypeRestriction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F8A7D0, app::Expression *, GetExpression, (app::BindingRestrictions_TypeRestriction * this_ptr));
}