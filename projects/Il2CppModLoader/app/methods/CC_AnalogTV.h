#pragma once
#include <interception_macros.h>

namespace app::methods::CC_AnalogTV {
    IL2CPP_REGISTER_METHOD(0x03191D60, void, OnRenderImage, (app::CC_AnalogTV * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03192280, void, ctor, (app::CC_AnalogTV * this_ptr))
}
