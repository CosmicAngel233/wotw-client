#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpression1 {
    IL2CPP_REGISTER_METHOD(0x022D0440, void, ctor, (app::MethodCallExpression1 * this_ptr, app::MethodInfo_1 * method_1, app::Expression * arg0))
    IL2CPP_REGISTER_METHOD(0x02FBC2E0, app::Expression *, GetArgument, (app::MethodCallExpression1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047538A8, MethodCallExpression1_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (app::MethodCallExpression1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC3B0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::MethodCallExpression1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC3C0, app::MethodCallExpression *, Rewrite, (app::MethodCallExpression1 * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
}