#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::SendMouseEvents_HitInfo {
    IL2CPP_REGISTER_METHOD(0x00218890, void, SendMessage, (app::SendMouseEvents_HitInfo__Boxed * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x0297CEB0, bool, op_Implicit, (app::SendMouseEvents_HitInfo exists))
    IL2CPP_REGISTER_METHOD(0x0297CF90, bool, Compare, (app::SendMouseEvents_HitInfo lhs, app::SendMouseEvents_HitInfo rhs))
}
