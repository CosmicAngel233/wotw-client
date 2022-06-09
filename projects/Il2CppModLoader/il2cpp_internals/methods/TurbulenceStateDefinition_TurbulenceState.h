#include <interception_macros.h>

namespace app::methods::TurbulenceStateDefinition_TurbulenceState {
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_TurbulenceMagnitude, (app::TurbulenceStateDefinition_TurbulenceState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_MagnitudeWeight, (app::TurbulenceStateDefinition_TurbulenceState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_TurbulenceSpeed, (app::TurbulenceStateDefinition_TurbulenceState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_SpeedWeight, (app::TurbulenceStateDefinition_TurbulenceState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00597B10, app::TurbulenceInfluencerOrder__Enum, get_TurbulenceApplyOrder, (app::TurbulenceStateDefinition_TurbulenceState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013D5830, void, __ctor, (app::TurbulenceStateDefinition_TurbulenceState * this_ptr));
}
