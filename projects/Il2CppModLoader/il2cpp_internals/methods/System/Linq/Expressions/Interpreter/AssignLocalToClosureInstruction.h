#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::AssignLocalToClosureInstruction * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::AssignLocalToClosureInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AssignLocalToClosureInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D5E00, app::String *, get_InstructionName, (app::AssignLocalToClosureInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D5E80, int32_t, Run, (app::AssignLocalToClosureInstruction * this_ptr, app::InterpretedFrame * frame));
}