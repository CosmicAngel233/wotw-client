#include <interception_macros.h>

namespace app::methods::SurfaceToSoundProviderMap_CallbackFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::SurfaceToSoundProviderMap_CallbackFunction * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::SurfaceToSoundProviderMap_CallbackFunction * this_ptr, app::SurfaceToSoundProviderMap * provider));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::SurfaceToSoundProviderMap_CallbackFunction * this_ptr, app::SurfaceToSoundProviderMap * provider, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SurfaceToSoundProviderMap_CallbackFunction * this_ptr, app::IAsyncResult * result));
}
