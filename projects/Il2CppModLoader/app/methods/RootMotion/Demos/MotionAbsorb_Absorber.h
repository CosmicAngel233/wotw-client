#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::MotionAbsorb_Absorber {
    IL2CPP_REGISTER_METHOD(0x02228000, void, SetToBone, (app::MotionAbsorb_Absorber * this_ptr, app::IKSolverFullBodyBiped * solver))
    IL2CPP_REGISTER_METHOD(0x022281A0, void, SetEffectorWeights, (app::MotionAbsorb_Absorber * this_ptr, app::IKSolverFullBodyBiped * solver, float w))
    IL2CPP_REGISTER_METHOD(0x004FC8F0, void, ctor, (app::MotionAbsorb_Absorber * this_ptr))
}