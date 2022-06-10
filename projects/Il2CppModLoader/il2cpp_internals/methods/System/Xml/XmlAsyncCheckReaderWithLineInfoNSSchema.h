#include <interception_macros.h>

namespace app::methods::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema {
    IL2CPP_REGISTER_METHOD(0x01959AD0, void, __ctor, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x01959BA0, app::XmlSchemaValidity__Enum, IXmlSchemaInfo_get_Validity, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959C30, bool, IXmlSchemaInfo_get_IsDefault, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959CC0, bool, IXmlSchemaInfo_get_IsNil, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959D50, app::XmlSchemaSimpleType *, IXmlSchemaInfo_get_MemberType, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959DE0, app::XmlSchemaType *, IXmlSchemaInfo_get_SchemaType, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959E70, app::XmlSchemaElement *, IXmlSchemaInfo_get_SchemaElement, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959F00, app::XmlSchemaAttribute *, IXmlSchemaInfo_get_SchemaAttribute, (app::XmlAsyncCheckReaderWithLineInfoNSSchema * this_ptr));
}