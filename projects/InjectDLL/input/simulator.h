#pragma once

#include <input/enums/actions.h>

namespace input
{
    void register_simulators(app::PlayerInput* input);
    void simulate(Action action, bool pressed);
    void clear_simulators();
}
