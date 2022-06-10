#include <interception_macros.h>

namespace app::methods::Colorful::Dithering {
    IL2CPP_REGISTER_METHOD(0x030427D0, void, OnRenderImage, (app::Dithering * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03042AB0, app::String *, GetShaderName, (app::Dithering * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03042B30, void, ctor, (app::Dithering * this_ptr))
}