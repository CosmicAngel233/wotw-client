#include <interception_macros.h>

namespace app::methods::Colorful::Blend {
    IL2CPP_REGISTER_METHOD(0x0303F6B0, void, OnRenderImage, (app::Blend * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0303F8A0, app::String *, GetShaderName, (app::Blend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E930, void, ctor, (app::Blend * this_ptr))
}