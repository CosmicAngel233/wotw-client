#include <interception_macros.h>

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectMainColorModifierWisps {
    IL2CPP_REGISTER_METHOD(0x0120A510, void, Apply, (app::MoonEffectMainColorModifierWisps * this_ptr, app::IMoonEffectComponentCache * input, app::MoonEffectRevertHandle * revert_handle));
    IL2CPP_REGISTER_METHOD(0x0120B030, void, ApplyColorOnRenderer, (app::MoonEffectMainColorModifierWisps * this_ptr, app::Renderer * renderer, app::Color color, app::Color * old_color));
    IL2CPP_REGISTER_METHOD(0x0120B1C0, void, Revert, (app::MoonEffectMainColorModifierWisps * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
    IL2CPP_REGISTER_METHOD(0x0120B570, void, __ctor, (app::MoonEffectMainColorModifierWisps * this_ptr));
}