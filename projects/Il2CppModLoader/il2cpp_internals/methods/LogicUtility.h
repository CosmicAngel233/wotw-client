#include <interception_macros.h>

namespace app::methods::LogicUtility {
    IL2CPP_REGISTER_METHOD(0x009EC800, bool, Compare, (float a, float b, app::LogicUtility_ComparisonType__Enum comparison));
    IL2CPP_REGISTER_METHOD(0x009EC870, String*, GetComparisonNiceName, (app::String * a, app::String* b, app::LogicUtility_ComparisonType__Enum comparison));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LogicUtility * this_ptr));
} // namespace app::methods::LogicUtility
