#include <interception_macros.h>

namespace app::methods::AmplifyColor::VolumeEffectField {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_1, (app::VolumeEffectField * this_ptr, app::String * field_name, app::String * field_type))
    IL2CPP_REGISTER_METHOD(0x030D2DF0, void, ctor_2, (app::VolumeEffectField * this_ptr, app::FieldInfo_1 * pi, app::Component_1 * c))
    IL2CPP_REGISTER_METHOD(0x030D2EB0, bool, IsValidType, (app::String * type))
    IL2CPP_REGISTER_METHOD(0x030D3060, void, UpdateValue, (app::VolumeEffectField * this_ptr, app::Object * val))
}