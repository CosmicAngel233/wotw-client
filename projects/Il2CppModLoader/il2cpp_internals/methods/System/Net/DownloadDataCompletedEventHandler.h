#include <interception_macros.h>

namespace app::methods::System::Net::DownloadDataCompletedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DownloadDataCompletedEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DownloadDataCompletedEventHandler * this_ptr, app::Object * sender, app::DownloadDataCompletedEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::DownloadDataCompletedEventHandler * this_ptr, app::Object * sender, app::DownloadDataCompletedEventArgs * e, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DownloadDataCompletedEventHandler * this_ptr, app::IAsyncResult * result));
}
