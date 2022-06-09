#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IK {
    IL2CPP_REGISTER_METHOD(0x02077C00, void, UpdateSolver, (app::IK * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02077CA0, void, InitiateSolver, (app::IK * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02077D20, void, FixTransforms, (app::IK * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AB5740, void, __ctor, (app::IK * this_ptr));
}
