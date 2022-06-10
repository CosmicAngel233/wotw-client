#include <interception_macros.h>

namespace app::methods::Mono::Xml::SecurityParser {
    IL2CPP_REGISTER_METHOD(0x02286B70, void, __ctor, (app::SecurityParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02286CC0, void, LoadXml, (app::SecurityParser * this_ptr, app::String * xml));
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::SecurityElement *, ToXml, (app::SecurityParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartParsing, (app::SecurityParser * this_ptr, app::SmallXmlParser * parser));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessingInstruction, (app::SecurityParser * this_ptr, app::String * name, app::String * text));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnIgnorableWhitespace, (app::SecurityParser * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHOD(0x02286E50, void, OnStartElement, (app::SecurityParser * this_ptr, app::String * name, app::SmallXmlParser_IAttrList * attrs));
    IL2CPP_REGISTER_METHOD(0x02287100, void, OnEndElement, (app::SecurityParser * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x022871C0, void, OnChars, (app::SecurityParser * this_ptr, app::String * ch));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndParsing, (app::SecurityParser * this_ptr, app::SmallXmlParser * parser));
}