#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::BrowserNative_Calltype_zfb_setZoom {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_Calltype_zfb_setZoom * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01DCC050, void, Invoke, (app::BrowserNative_Calltype_zfb_setZoom * this_ptr, int32_t id, double zoom));
    IL2CPP_REGISTER_METHOD(0x01DCC3C0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_setZoom * this_ptr, int32_t id, double zoom, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_setZoom * this_ptr, app::IAsyncResult * result));
}
