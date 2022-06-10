#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Recoil_RecoilOffset {
    IL2CPP_REGISTER_METHOD(0x02A1F3C0, void, Start, (app::Recoil_RecoilOffset * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A1F4E0, void, Apply, (app::Recoil_RecoilOffset * this_ptr, app::IKSolverFullBodyBiped * solver, app::Quaternion rotation, float master_weight, float length, float time_left));
    IL2CPP_REGISTER_METHOD(0x02A1F8F0, void, __ctor, (app::Recoil_RecoilOffset * this_ptr));
}