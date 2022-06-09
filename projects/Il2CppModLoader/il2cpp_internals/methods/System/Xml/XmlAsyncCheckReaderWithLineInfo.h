#include <interception_macros.h>

namespace app::methods::System::Xml::XmlAsyncCheckReaderWithLineInfo {
    IL2CPP_REGISTER_METHOD(0x01959580, void, __ctor, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x01959650, bool, HasLineInfo, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x019596E0, int32_t, get_LineNumber, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01959770, int32_t, get_LinePosition, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr));
}
