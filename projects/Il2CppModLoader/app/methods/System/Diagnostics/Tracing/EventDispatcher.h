#pragma once
#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventDispatcher {
    IL2CPP_REGISTER_METHOD(0x0174AE40, void, ctor, (app::EventDispatcher * this_ptr, app::EventDispatcher * next, app::Boolean__Array * event_enabled, app::EventListener * listener))
}
