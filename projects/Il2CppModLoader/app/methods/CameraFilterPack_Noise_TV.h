#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Noise_TV {
    IL2CPP_REGISTER_METHOD(0x024824E0, app::Material *, get_material, (app::CameraFilterPack_Noise_TV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024826C0, void, Start, (app::CameraFilterPack_Noise_TV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02482860, void, OnRenderImage, (app::CameraFilterPack_Noise_TV * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02482C70, void, OnValidate, (app::CameraFilterPack_Noise_TV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02482D10, void, Update, (app::CameraFilterPack_Noise_TV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02482DB0, void, OnDisable, (app::CameraFilterPack_Noise_TV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7040, void, ctor, (app::CameraFilterPack_Noise_TV * this_ptr))
}