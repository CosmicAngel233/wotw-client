#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_numBrowsers {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_numBrowsers * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x0167F180, int32_t, Invoke, (app::BrowserNative_Calltype_zfb_numBrowsers * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_numBrowsers * this_ptr, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::BrowserNative_Calltype_zfb_numBrowsers * this_ptr, app::IAsyncResult * result));
}
