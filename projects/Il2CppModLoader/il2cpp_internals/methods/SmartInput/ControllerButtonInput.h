#include <interception_macros.h>

namespace app::methods::SmartInput::ControllerButtonInput {
    IL2CPP_REGISTER_METHOD(0x006CB4D0, void, __ctor, (app::ControllerButtonInput * this_ptr, app::XboxControllerInput_Button__Enum button));
    IL2CPP_REGISTER_METHOD(0x006CB500, bool, GetValue, (app::ControllerButtonInput * this_ptr));
}