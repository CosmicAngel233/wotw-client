#include <interception_macros.h>

namespace app::methods::AmplifyColor::VolumeEffectComponentFlags {
    IL2CPP_REGISTER_METHOD(0x030D0DF0, void, __ctor_1, (app::VolumeEffectComponentFlags * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x030D0F50, void, __ctor_2, (app::VolumeEffectComponentFlags * this_ptr, app::VolumeEffectComponent * comp));
    IL2CPP_REGISTER_METHOD(0x030D11F0, void, __ctor_3, (app::VolumeEffectComponentFlags * this_ptr, app::Component_1 * c));
    IL2CPP_REGISTER_METHOD(0x030D1480, void, UpdateComponentFlags_1, (app::VolumeEffectComponentFlags * this_ptr, app::VolumeEffectComponent * comp));
    IL2CPP_REGISTER_METHOD(0x030D18E0, void, UpdateComponentFlags_2, (app::VolumeEffectComponentFlags * this_ptr, app::Component_1 * c));
    IL2CPP_REGISTER_METHOD(0x030D1DC0, app::String__Array *, GetFieldNames, (app::VolumeEffectComponentFlags * this_ptr));
}