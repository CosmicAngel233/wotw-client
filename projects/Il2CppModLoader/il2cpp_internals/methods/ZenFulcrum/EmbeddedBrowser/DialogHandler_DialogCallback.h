#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DialogHandler_DialogCallback * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01DD5590, void, Invoke, (app::DialogHandler_DialogCallback * this_ptr, bool affirm, app::String * text1, app::String * text2));
    IL2CPP_REGISTER_METHOD(0x01DD5920, app::IAsyncResult *, BeginInvoke, (app::DialogHandler_DialogCallback * this_ptr, bool affirm, app::String * text1, app::String * text2, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DialogHandler_DialogCallback * this_ptr, app::IAsyncResult * result));
}