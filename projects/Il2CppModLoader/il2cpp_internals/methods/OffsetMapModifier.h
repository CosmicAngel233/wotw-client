#include <interception_macros.h>

namespace app::methods::OffsetMapModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::OffsetMapModifier * this_ptr, float strength, float speed));
    IL2CPP_REGISTER_METHOD(0x00610910, void, SetProperties, (app::OffsetMapModifier * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00610A00, void, __ctor, (app::OffsetMapModifier * this_ptr));
}
