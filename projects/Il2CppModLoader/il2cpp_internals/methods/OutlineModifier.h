#include <interception_macros.h>

namespace app::methods::OutlineModifier {
    IL2CPP_REGISTER_METHOD(0x004413D0, void, SetProperties, (app::OutlineModifier * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, NeedsMipMap, (app::OutlineModifier * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004414C0, float, GetQuadExpandSize, (app::OutlineModifier * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004414D0, void, __ctor, (app::OutlineModifier * this_ptr));
}
