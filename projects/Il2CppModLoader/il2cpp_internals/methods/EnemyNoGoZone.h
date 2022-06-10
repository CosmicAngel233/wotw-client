#include <interception_macros.h>

namespace app::methods::EnemyNoGoZone {
    IL2CPP_REGISTER_METHOD(0x00C82200, void, OnEnableRuntime, (app::EnemyNoGoZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C822C0, void, OnDisableRuntime, (app::EnemyNoGoZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnZoneUpdate, (app::EnemyNoGoZone * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (app::EnemyNoGoZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C82380, void, __cctor, ());
}