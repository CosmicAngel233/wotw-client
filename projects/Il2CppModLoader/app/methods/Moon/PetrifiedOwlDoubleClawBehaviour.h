#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::PetrifiedOwlDoubleClawBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C33D90, void, OnStartBehaviour, (app::PetrifiedOwlDoubleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33E00, void, OnEndBehaviour, (app::PetrifiedOwlDoubleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33E40, float, GetScore, (app::PetrifiedOwlDoubleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33F90, bool, EndCondition, (app::PetrifiedOwlDoubleClawBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C34010, void, ctor, (app::PetrifiedOwlDoubleClawBehaviour * this_ptr))
}
