#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::XTextWrapper {
    IL2CPP_REGISTER_METHOD(0x01A59E70, app::XText *, get_Text, (app::XTextWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XTextWrapper * this_ptr, app::XText * text))
    IL2CPP_REGISTER_METHOD(0x01A59F40, app::String *, get_Value, (app::XTextWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59F60, app::IXmlNode *, get_ParentNode, (app::XTextWrapper * this_ptr))
}