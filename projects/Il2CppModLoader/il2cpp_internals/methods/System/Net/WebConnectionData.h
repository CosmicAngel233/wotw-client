#include <interception_macros.h>

namespace app::methods::System::Net::WebConnectionData {
    IL2CPP_REGISTER_METHOD(0x00C26ED0, void, __ctor_1, (app::WebConnectionData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::WebConnectionData * this_ptr, app::HttpWebRequest * request));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::HttpWebRequest *, get_request, (app::WebConnectionData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_request, (app::WebConnectionData * this_ptr, app::HttpWebRequest * value));
    IL2CPP_REGISTER_METHOD(0x002FD490, app::ReadState__Enum, get_ReadState, (app::WebConnectionData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D68B50, void, set_ReadState, (app::WebConnectionData * this_ptr, app::ReadState__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04707578, WebConnectionData_set_ReadState__MethodInfo);
}