#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_registerJSCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_registerJSCallback * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_Calltype_zfb_registerJSCallback * this_ptr, int32_t id, app::BrowserNative_ForwardJSCallFunc * cb));
    IL2CPP_REGISTER_METHOD(0x01DCA190, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_registerJSCallback * this_ptr, int32_t id, app::BrowserNative_ForwardJSCallFunc * cb, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_registerJSCallback * this_ptr, app::IAsyncResult * result));
}