#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_setDebugFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_setDebugFunc * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::BrowserNative_Calltype_zfb_setDebugFunc * this_ptr, app::BrowserNative_MessageFunc * debug_func));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_setDebugFunc * this_ptr, app::BrowserNative_MessageFunc * debug_func, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_setDebugFunc * this_ptr, app::IAsyncResult * result));
}
