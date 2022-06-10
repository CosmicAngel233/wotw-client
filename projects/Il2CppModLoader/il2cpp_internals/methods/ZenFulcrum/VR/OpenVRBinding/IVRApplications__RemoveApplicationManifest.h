#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__RemoveApplicationManifest {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_RemoveApplicationManifest * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x020105B0, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_RemoveApplicationManifest * this_ptr, app::String * pch_application_manifest_full_path));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_RemoveApplicationManifest * this_ptr, app::String * pch_application_manifest_full_path, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_RemoveApplicationManifest * this_ptr, app::IAsyncResult * result));
}