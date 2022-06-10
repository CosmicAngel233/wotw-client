#include <interception_macros.h>

namespace app::methods::Spring {
    IL2CPP_REGISTER_METHOD(0x009A4D70, void, OnEnable, (app::Spring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A4F00, void, OnDisable, (app::Spring * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A5090, void, OnRestoreCheckpoint, (app::Spring * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047168E0, Spring_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009A5230, void, OnCollisionEnter, (app::Spring * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x009A5630, void, ApplySpringForce, (app::Spring * this_ptr, app::GameObject * entity))
    IL2CPP_REGISTER_METHOD(0x009A5B20, void, SpringSein, (app::Spring * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x009A6160, void, SpringKu, (app::Spring * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x009A6520, void, ctor, (app::Spring * this_ptr))
}