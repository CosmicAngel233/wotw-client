#include <interception_macros.h>

namespace app::methods::PositionTurbulence_GenericTurbulence {
    IL2CPP_REGISTER_METHOD(0x00C693E0, void, Update, (app::PositionTurbulence_GenericTurbulence * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x00C693F0, float, get_TurbulenceValueInThisFrame, (app::PositionTurbulence_GenericTurbulence * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C694D0, void, __ctor, (app::PositionTurbulence_GenericTurbulence * this_ptr));
}