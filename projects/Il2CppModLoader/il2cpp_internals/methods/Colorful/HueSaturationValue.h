#include <interception_macros.h>

namespace app::methods::Colorful::HueSaturationValue {
    IL2CPP_REGISTER_METHOD(0x030474F0, void, OnRenderImage, (app::HueSaturationValue * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
    IL2CPP_REGISTER_METHOD(0x03047C90, app::String *, GetShaderName, (app::HueSaturationValue * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::HueSaturationValue * this_ptr));
}
