#pragma once
#include <interception_macros.h>

namespace app::methods::MapStonePickup {
    IL2CPP_REGISTER_METHOD(0x00A0AB90, void, OnCollectorCandidateTouch, (app::MapStonePickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MapStonePickup * this_ptr))
}
