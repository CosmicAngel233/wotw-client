#include <interception_macros.h>

namespace app::methods::System::ComponentModel::PropertyChangedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PropertyChangedEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::PropertyChangedEventHandler * this_ptr, app::Object * sender, app::PropertyChangedEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::PropertyChangedEventHandler * this_ptr, app::Object * sender, app::PropertyChangedEventArgs * e, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PropertyChangedEventHandler * this_ptr, app::IAsyncResult * result));
}