#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossWallCrushBehaviour {
    IL2CPP_REGISTER_METHOD(0x01781AD0, void, OnEnter, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01781C60, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01781CD0, void, OnExit, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01781D00, void, ModifyRootMotion, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr, app::Vector3 * velocity));
    IL2CPP_REGISTER_METHOD(0x01781E00, void, SpawnShockwave, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01782040, void, MoveToPositionX, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr, float x));
    IL2CPP_REGISTER_METHOD(0x01782390, app::Enum__Array *, GetEntries, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01782430, app::Enum, Evaluate, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x017824D0, void, __ctor, (app::PetrifiedOwlBossWallCrushBehaviour * this_ptr));
}