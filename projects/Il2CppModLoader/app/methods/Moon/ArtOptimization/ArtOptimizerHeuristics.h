#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ArtOptimizerHeuristics {
    IL2CPP_REGISTER_METHOD(0x01347A60, bool, IsObjectIgnored, (app::GameObject * uber_shader))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsAnimationUberShader, (app::UberShaderComponent * uber_shader))
    IL2CPP_REGISTER_METHOD(0x01347F70, bool, IsAnimationModifier, (app::UberShaderModifier * modifier))
    IL2CPP_REGISTER_METHOD(0x01348100, bool, IsIgnoredComponent, (app::Component_1 * component))
    IL2CPP_REGISTER_METHOD(0x01348210, void, cctor, ())
}