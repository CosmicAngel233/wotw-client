#include <interception_macros.h>

namespace app::methods::TranslateModifier {
    IL2CPP_REGISTER_METHOD(0x00B0A3F0, void, ApplyMultipliers, (app::TranslateModifier * this_ptr, float strength, float speed));
    IL2CPP_REGISTER_METHOD(0x00B0A460, void, SetProperties, (app::TranslateModifier * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B0A5A0, void, __ctor, (app::TranslateModifier * this_ptr));
}
