#include <interception_macros.h>

namespace app::methods::SeinEnterExitTrigger {
IL2CPP_REGISTER_METHOD(0x00AD0F60, void, OnTriggerEnter, (app::SeinEnterExitTrigger * this_ptr, app::Collider * collider));
IL2CPP_REGISTER_METHOD(0x00AD10F0, void, OnTriggerExit, (app::SeinEnterExitTrigger * this_ptr, app::Collider * collider));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SeinEnterExitTrigger * this_ptr));
}
