#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::DebuggerDisplayXmlNodeProxy {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::DebuggerDisplayXmlNodeProxy__Boxed * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x001DE680, app::String *, ToString, (app::DebuggerDisplayXmlNodeProxy__Boxed * this_ptr))
}
