#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_LinearLight {
    IL2CPP_REGISTER_METHOD(0x027555F0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027557D0, void, Start, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02755B90, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture));
    IL2CPP_REGISTER_METHOD(0x02755F80, void, OnValidate, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02756270, void, Update, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02756300, void, OnEnable, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027565D0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027567C0, void, __ctor, (app::CameraFilterPack_Blend2Camera_LinearLight * this_ptr));
}