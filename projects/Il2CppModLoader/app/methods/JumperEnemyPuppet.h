#include <interception_macros.h>

namespace app::methods::JumperEnemyPuppet {
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_Id, (app::JumperEnemyPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59840, float, get_NearEnoughDistance, (app::JumperEnemyPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59850, float, get_TooFarDistance, (app::JumperEnemyPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59860, void, ctor, (app::JumperEnemyPuppet * this_ptr))
}
