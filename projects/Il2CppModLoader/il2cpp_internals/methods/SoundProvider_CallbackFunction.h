#include <interception_macros.h>

namespace app::methods::SoundProvider_CallbackFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::SoundProvider_CallbackFunction * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::SoundProvider_CallbackFunction * this_ptr, app::SoundProvider * provider));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::SoundProvider_CallbackFunction * this_ptr, app::SoundProvider * provider, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SoundProvider_CallbackFunction * this_ptr, app::IAsyncResult * result));
}
