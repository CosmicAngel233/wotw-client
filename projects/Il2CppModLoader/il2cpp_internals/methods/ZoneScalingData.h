#include <interception_macros.h>

namespace app::methods::ZoneScalingData {
    IL2CPP_REGISTER_METHOD(0x00F59020, app::Texture *, get_DisplayTexture, (app::ZoneScalingData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F59150, int32_t, GetMonsterDifficulty_1, (app::ZoneScalingData * this_ptr, app::EntityPlaceholderScalingData * enemy));
    IL2CPP_REGISTER_METHOD(0x00F592B0, bool, GetMonsterDifficulty_2, (app::ZoneScalingData * this_ptr, app::ScreenshotIcon_EnemyType__Enum enemy_icon, int32_t * difficulty));
    IL2CPP_REGISTER_METHOD(0x00F59430, void, __ctor, (app::ZoneScalingData * this_ptr));
}