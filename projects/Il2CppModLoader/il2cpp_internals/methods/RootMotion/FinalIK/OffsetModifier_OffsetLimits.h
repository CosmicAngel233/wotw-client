#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::OffsetModifier_OffsetLimits {
    IL2CPP_REGISTER_METHOD(0x02A18C50, void, Apply, (app::OffsetModifier_OffsetLimits * this_ptr, app::IKEffector * e, app::Quaternion root_rotation));
    IL2CPP_REGISTER_METHOD(0x02A18FF0, float, SpringAxis, (app::OffsetModifier_OffsetLimits * this_ptr, float value, float min, float max));
    IL2CPP_REGISTER_METHOD(0x02A19040, float, Spring, (app::OffsetModifier_OffsetLimits * this_ptr, float value, float limit, bool negative));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::OffsetModifier_OffsetLimits * this_ptr));
}