#include <interception_macros.h>

namespace app::methods::Moon::AxisAlignedBox {
    IL2CPP_REGISTER_METHOD(0x00CB5430, void, __ctor_1, (app::AxisAlignedBox * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CB5480, void, __ctor_2, (app::AxisAlignedBox * this_ptr, float size));
    IL2CPP_REGISTER_METHOD(0x00CB5620, void, __ctor_3, (app::AxisAlignedBox * this_ptr, app::AxisAlignedBox * box_to_copy));
    IL2CPP_REGISTER_METHOD(0x00CB56A0, app::Vector3, get_Size, (app::AxisAlignedBox * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CB57A0, app::Vector3, get_Center, (app::AxisAlignedBox * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CB58C0, void, set_Center, (app::AxisAlignedBox * this_ptr, app::Vector3 value));
    IL2CPP_REGISTER_METHOD(0x00CB5A20, bool, Equals_1, (app::AxisAlignedBox * this_ptr, app::AxisAlignedBox * other));
    IL2CPP_REGISTER_METHOD(0x00CB5A90, bool, Equals_2, (app::AxisAlignedBox * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x00CB5BE0, int32_t, GetHashCode, (app::AxisAlignedBox * this_ptr));
}
