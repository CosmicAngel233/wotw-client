#include <interception_macros.h>

namespace app::methods::LeverSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline *, get_Transition, (app::LeverSetupData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::LeverSetupData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LeverSetupData * this_ptr));
}
