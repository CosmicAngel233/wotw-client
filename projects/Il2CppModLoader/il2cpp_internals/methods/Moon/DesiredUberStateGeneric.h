#include <interception_macros.h>

namespace app::methods::Moon::DesiredUberStateGeneric {
    IL2CPP_REGISTER_METHOD(0x01B619E0, void, __ctor, (app::DesiredUberStateGeneric * this_ptr, app::IGenericUberState * uber_state, app::GameObject * owner, float desired_value));
    IL2CPP_REGISTER_METHOD(0x01B61BC0, void, WriteDesiredStates, (app::DesiredUberStateGeneric * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04730B88, DesiredUberStateGeneric_WriteDesiredStates__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01B61DC0, void, Revert, (app::DesiredUberStateGeneric * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01B61EB0, app::IGenericUberState *, get_GenericState, (app::DesiredUberStateGeneric * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01B61F40, app::IUberState *, get_UberState, (app::DesiredUberStateGeneric * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01B61FD0, bool, IsFulfilled, (app::DesiredUberStateGeneric * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01B620D0, app::String *, get_NiceName, (app::DesiredUberStateGeneric * this_ptr));
}