#include <interception_macros.h>

namespace app::methods::DrownPlayer {
    IL2CPP_REGISTER_METHOD(0x00BE8450, void, OnTriggerStay, (app::DrownPlayer * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DrownPlayer * this_ptr))
}
