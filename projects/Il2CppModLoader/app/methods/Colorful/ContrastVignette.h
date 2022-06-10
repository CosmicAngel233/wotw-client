#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Colorful::ContrastVignette {
    IL2CPP_REGISTER_METHOD(0x00F68520, void, Update, (app::ContrastVignette * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderImage, (app::ContrastVignette * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03041960, app::String *, GetShaderName, (app::ContrastVignette * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030419E0, void, ctor, (app::ContrastVignette * this_ptr))
}
