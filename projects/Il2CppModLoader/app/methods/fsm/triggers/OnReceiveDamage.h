#pragma once
#include <interception_macros.h>

namespace app::methods::fsm::triggers::OnReceiveDamage {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::OnReceiveDamage * this_ptr, app::Damage * damage))
}
