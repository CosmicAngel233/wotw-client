#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::InteractionSettings {
    IL2CPP_REGISTER_METHOD(0x01990260, app::IMessageProvider *, get_ResolvedMessageProvider, (app::InteractionSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019902F0, void, ctor, (app::InteractionSettings * this_ptr))
}
