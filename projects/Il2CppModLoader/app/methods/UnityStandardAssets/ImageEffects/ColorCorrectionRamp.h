#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ColorCorrectionRamp {
    IL2CPP_REGISTER_METHOD(0x0251D950, void, OnRenderImage, (app::ColorCorrectionRamp * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ColorCorrectionRamp * this_ptr))
}
