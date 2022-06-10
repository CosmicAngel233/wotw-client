#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::ScopeN {
    IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, __ctor, (app::ScopeN * this_ptr, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * body));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ *, get_Body, (app::ScopeN * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02FBF4D0, app::Expression *, GetExpression, (app::ScopeN * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02FBF570, int32_t, get_ExpressionCount, (app::ScopeN * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02FBF600, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (app::ScopeN * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02FBF680, app::BlockExpression *, Rewrite, (app::ScopeN * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, app::Expression__Array * args));
}