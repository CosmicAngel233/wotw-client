#include <interception_macros.h>

namespace app::methods::PlayFab_Internal::PlayFabHttp_ApiProcessingEvent_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlayFabHttp_ApiProcessingEvent_1_System_Object_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabHttp_ApiProcessingEvent_1_System_Object_ * this_ptr, app::Object * e));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::PlayFabHttp_ApiProcessingEvent_1_System_Object_ * this_ptr, app::Object * e, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayFabHttp_ApiProcessingEvent_1_System_Object_ * this_ptr, app::IAsyncResult * result));
}
