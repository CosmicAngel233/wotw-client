#include <interception_macros.h>

namespace app::methods::System::Xml::XPath::XPathDocument {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlNameTable *, get_NameTable, (app::XPathDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasLineInfo, (app::XPathDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01954C40, int32_t, GetXmlNamespaceNode, (app::XPathDocument * this_ptr, app::XPathNode__Array * * page_xml_nmsp))
    IL2CPP_REGISTER_METHOD(0x01954C50, int32_t, LookupNamespaces, (app::XPathDocument * this_ptr, app::XPathNode__Array * page_elem, int32_t idx_elem, app::XPathNode__Array * * page_nmsp))
}