#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayTransformType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayTransformType * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformType * this_ptr, uint64_t ul_overlay_handle, app::VROverlayTransformType__Enum * pe_transform_type));
    IL2CPP_REGISTER_METHOD(0x02D7D2D0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTransformType * this_ptr, uint64_t ul_overlay_handle, app::VROverlayTransformType__Enum * pe_transform_type, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformType * this_ptr, app::VROverlayTransformType__Enum * pe_transform_type, app::IAsyncResult * result));
}
