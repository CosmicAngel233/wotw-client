#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_MutableBox {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::InitializeLocalInstruction_MutableBox * this_ptr, int32_t index, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01CD6CD0, int32_t, Run, (app::InitializeLocalInstruction_MutableBox * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHODINFO(0x04795648, InitializeLocalInstruction_MutableBox_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CD6EB0, app::String *, get_InstructionName, (app::InitializeLocalInstruction_MutableBox * this_ptr))
}