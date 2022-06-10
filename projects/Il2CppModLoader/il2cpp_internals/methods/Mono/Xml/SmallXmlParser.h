#include <interception_macros.h>

namespace app::methods::Mono::Xml::SmallXmlParser {
    IL2CPP_REGISTER_METHOD(0x02287290, void, __ctor, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02287650, app::Exception *, Error, (app::SmallXmlParser * this_ptr, app::String * msg));
    IL2CPP_REGISTER_METHOD(0x022878A0, app::Exception *, UnexpectedEndError, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022879F0, bool, IsNameChar, (app::SmallXmlParser * this_ptr, uint16_t c, bool start));
    IL2CPP_REGISTER_METHOD(0x02287B50, bool, IsWhitespace, (app::SmallXmlParser * this_ptr, int32_t c));
    IL2CPP_REGISTER_METHOD(0x02287B70, void, SkipWhitespaces_1, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02287B80, void, HandleWhitespaces, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02287E00, void, SkipWhitespaces_2, (app::SmallXmlParser * this_ptr, bool expected));
    IL2CPP_REGISTER_METHODINFO(0x04727108, SmallXmlParser_SkipWhitespaces_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02287F30, int32_t, Peek, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02287F60, int32_t, Read, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02287FC0, void, Expect, (app::SmallXmlParser * this_ptr, int32_t c));
    IL2CPP_REGISTER_METHODINFO(0x04794B28, SmallXmlParser_Expect__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02288110, app::String *, ReadUntil, (app::SmallXmlParser * this_ptr, uint16_t until, bool handle_references));
    IL2CPP_REGISTER_METHODINFO(0x0476F4A0, SmallXmlParser_ReadUntil__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02288410, app::String *, ReadName, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475E480, SmallXmlParser_ReadName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02288660, void, Parse, (app::SmallXmlParser * this_ptr, app::TextReader * input, app::SmallXmlParser_IContentHandler * handler));
    IL2CPP_REGISTER_METHODINFO(0x04768358, SmallXmlParser_Parse__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02288880, void, Cleanup, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02288920, void, ReadContent, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0478E208, SmallXmlParser_ReadContent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022890B0, void, HandleBufferedContent, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022891E0, void, ReadCharacters, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02289450, void, ReadReference, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474D538, SmallXmlParser_ReadReference__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02289720, int32_t, ReadCharacterReference, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022898B0, void, ReadAttribute, (app::SmallXmlParser * this_ptr, app::SmallXmlParser_AttrListImpl * a));
    IL2CPP_REGISTER_METHODINFO(0x0473DA08, SmallXmlParser_ReadAttribute__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02289B10, void, ReadCDATASection, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04784FF8, SmallXmlParser_ReadCDATASection__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0228A080, void, ReadComment, (app::SmallXmlParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04799F78, SmallXmlParser_ReadComment__MethodInfo);
}