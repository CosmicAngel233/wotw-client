#include <interception_macros.h>

namespace app::methods::UnityEngine::Camera_CameraCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Camera_CameraCallback * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Camera_CameraCallback * this_ptr, app::Camera * cam));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Camera_CameraCallback * this_ptr, app::Camera * cam, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Camera_CameraCallback * this_ptr, app::IAsyncResult * result));
}
