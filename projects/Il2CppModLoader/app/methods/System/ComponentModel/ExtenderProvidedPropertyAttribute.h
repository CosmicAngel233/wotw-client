#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ExtenderProvidedPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x01FED6E0, app::ExtenderProvidedPropertyAttribute *, Create, (app::PropertyDescriptor * extender_property, app::Type * receiver_type, app::IExtenderProvider * provider))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExtenderProvidedPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PropertyDescriptor *, get_ExtenderProperty, (app::ExtenderProvidedPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IExtenderProvider *, get_Provider, (app::ExtenderProvidedPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type *, get_ReceiverType, (app::ExtenderProvidedPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FED850, bool, Equals, (app::ExtenderProvidedPropertyAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::ExtenderProvidedPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FED9A0, bool, IsDefaultAttribute, (app::ExtenderProvidedPropertyAttribute * this_ptr))
}