#include <interception_macros.h>

namespace app::methods::AkLogger_ErrorLoggerInteropDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::String * message, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::IAsyncResult * result));
}
