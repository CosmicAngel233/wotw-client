#pragma once
#include <interception_macros.h>

namespace app::methods::AchievementDatabase {
    IL2CPP_REGISTER_METHOD(0x004B4020, app::ReadOnlyCollection_1_AchievementAsset_ *, get_Achievements, (app::AchievementDatabase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AchievementDatabase * this_ptr))
}
