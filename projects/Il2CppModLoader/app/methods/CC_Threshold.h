#pragma once
#include <interception_macros.h>

namespace app::methods::CC_Threshold {
    IL2CPP_REGISTER_METHOD(0x03195790, void, OnRenderImage, (app::CC_Threshold * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03195920, void, ctor, (app::CC_Threshold * this_ptr))
}
