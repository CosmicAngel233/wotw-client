#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTexture {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayTexture * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTexture * this_ptr, uint64_t ul_overlay_handle, app::Texture_t * p_texture))
    IL2CPP_REGISTER_METHOD(0x02D80E10, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayTexture * this_ptr, uint64_t ul_overlay_handle, app::Texture_t * p_texture, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTexture * this_ptr, app::Texture_t * p_texture, app::IAsyncResult * result))
}