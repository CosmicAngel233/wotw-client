#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlTypeSerializationSource {
    IL2CPP_REGISTER_METHOD(0x019501E0, void, __ctor, (app::XmlTypeSerializationSource * this_ptr, app::Type * type, app::XmlRootAttribute * root, app::XmlAttributeOverrides * attribute_overrides, app::String * namspace, app::Type__Array * included_types));
    IL2CPP_REGISTER_METHOD(0x019504B0, bool, Equals, (app::XmlTypeSerializationSource * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x01950620, int32_t, GetHashCode, (app::XmlTypeSerializationSource * this_ptr));
}