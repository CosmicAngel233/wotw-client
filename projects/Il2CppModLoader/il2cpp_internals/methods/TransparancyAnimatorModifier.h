#include <interception_macros.h>

namespace app::methods::TransparancyAnimatorModifier {
    IL2CPP_REGISTER_METHOD(0x00B0BEA0, void, ApplyMultipliers, (app::TransparancyAnimatorModifier * this_ptr, float strength, float speed));
    IL2CPP_REGISTER_METHOD(0x00B0BED0, void, SetProperties, (app::TransparancyAnimatorModifier * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B0BF90, void, __ctor, (app::TransparancyAnimatorModifier * this_ptr));
}