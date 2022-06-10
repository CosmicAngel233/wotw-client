#include <interception_macros.h>

namespace app::methods::LizardCamouflageEntity {
    IL2CPP_REGISTER_METHOD(0x00FA9530, void, OnPoolSpawned, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9630, void, OnUpdate, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9650, void, UpdateInvisibility, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA98E0, void, BecomeVisible, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9930, void, BecomeInvisible, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9AE0, void, StopInvisibleTimelines, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9C50, bool, get_ShouldHandleInvisibility, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9D80, void, __ctor, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00FA9E20, void, _BecomeInvisible_b__9_0, (app::LizardCamouflageEntity * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476CF78, LizardCamouflageEntity__BecomeInvisible_b__9_0__MethodInfo);
}