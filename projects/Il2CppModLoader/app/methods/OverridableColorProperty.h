#include <interception_macros.h>

namespace app::methods::OverridableColorProperty {
    IL2CPP_REGISTER_METHOD(0x00443210, int32_t, get_ID, (app::OverridableColorProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443280, void, ctor_1, (app::OverridableColorProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443290, void, ctor_2, (app::OverridableColorProperty * this_ptr, app::OverridableColorProperty * color_property))
    IL2CPP_REGISTER_METHOD(0x004432D0, void, Apply, (app::OverridableColorProperty * this_ptr, app::OverridableColorProperty * color_property))
}