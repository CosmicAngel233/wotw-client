#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::HitReaction_HitPointBone_BoneLink {
    IL2CPP_REGISTER_METHOD(0x02076C90, void, Apply, (app::HitReaction_HitPointBone_BoneLink * this_ptr, app::IKSolverFullBodyBiped * solver, app::Quaternion offset, float cross_fader));
    IL2CPP_REGISTER_METHOD(0x02077140, void, CrossFadeStart, (app::HitReaction_HitPointBone_BoneLink * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02077150, void, __ctor, (app::HitReaction_HitPointBone_BoneLink * this_ptr));
}
