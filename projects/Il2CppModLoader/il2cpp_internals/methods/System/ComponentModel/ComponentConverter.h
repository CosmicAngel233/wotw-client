#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ComponentConverter {
    IL2CPP_REGISTER_METHOD(0x024A9C70, void, __ctor, (app::ComponentConverter * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x024A9D90, app::PropertyDescriptorCollection *, GetProperties, (app::ComponentConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value, app::Attribute__Array * attributes));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetPropertiesSupported, (app::ComponentConverter * this_ptr, app::ITypeDescriptorContext * context));
}
