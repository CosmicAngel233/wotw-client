#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_NavStateFunc * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01DCD5D0, void, Invoke, (app::BrowserNative_NavStateFunc * this_ptr, int32_t browser_id, bool can_go_back, bool can_go_forward, bool lodaing, void * url))
    IL2CPP_REGISTER_METHOD(0x01DCDA70, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_NavStateFunc * this_ptr, int32_t browser_id, bool can_go_back, bool can_go_forward, bool lodaing, void * url, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_NavStateFunc * this_ptr, app::IAsyncResult * result))
}