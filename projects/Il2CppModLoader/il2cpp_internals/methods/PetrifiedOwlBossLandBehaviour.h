#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossLandBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::StateMachine_2 *, get_StateMachine, (app::PetrifiedOwlBossLandBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00660430, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (app::PetrifiedOwlBossLandBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x017757E0, void, CopyData, (app::PetrifiedOwlBossLandBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other));
    IL2CPP_REGISTER_METHOD(0x017758D0, void, OnEntityInitialized, (app::PetrifiedOwlBossLandBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01775BE0, void, OnEnter, (app::PetrifiedOwlBossLandBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01775C50, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossLandBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01775D50, void, OnExit, (app::PetrifiedOwlBossLandBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01775D90, void, __ctor, (app::PetrifiedOwlBossLandBehaviour * this_ptr));
}