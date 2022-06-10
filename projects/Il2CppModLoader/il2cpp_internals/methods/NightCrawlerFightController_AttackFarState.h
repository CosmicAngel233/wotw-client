#include <interception_macros.h>

namespace app::methods::NightCrawlerFightController_AttackFarState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::NightCrawlerFightController_AttackFarState * this_ptr, app::NightCrawlerFightController * controller));
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, IsRightSide, (app::NightCrawlerFightController_AttackFarState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00606E00, void, OnEnter, (app::NightCrawlerFightController_AttackFarState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0049C100, void, OnFarAttackRightTrigger, (app::NightCrawlerFightController_AttackFarState * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472CCC0, NightCrawlerFightController_AttackFarState_OnFarAttackRightTrigger__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00607140, void, AttackFinished, (app::NightCrawlerFightController_AttackFarState * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477D638, NightCrawlerFightController_AttackFarState_AttackFinished__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00607190, void, OnExit, (app::NightCrawlerFightController_AttackFarState * this_ptr));
}