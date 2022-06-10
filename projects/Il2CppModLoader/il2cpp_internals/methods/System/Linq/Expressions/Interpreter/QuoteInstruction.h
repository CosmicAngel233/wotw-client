#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::QuoteInstruction {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::QuoteInstruction * this_ptr, app::Expression * operand, app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_ * hoisted_variables));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::QuoteInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0240D360, app::String *, get_InstructionName, (app::QuoteInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0240D3E0, int32_t, Run, (app::QuoteInstruction * this_ptr, app::InterpretedFrame * frame));
}