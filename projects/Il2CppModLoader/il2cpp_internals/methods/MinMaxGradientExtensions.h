#include <interception_macros.h>

namespace app::methods::MinMaxGradientExtensions {
    IL2CPP_REGISTER_METHOD(0x02557D70, app::ParticleSystem_MinMaxGradient, MultiplyColor, (app::ParticleSystem_MinMaxGradient target, app::Color color));
    IL2CPP_REGISTER_METHOD(0x02557F00, app::ParticleSystem_MinMaxGradient, OverrideColor, (app::ParticleSystem_MinMaxGradient target, app::Color color));
}