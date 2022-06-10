#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalFromClosureInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::LoadLocalFromClosureInstruction * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadLocalFromClosureInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023F9D30, app::String *, get_InstructionName, (app::LoadLocalFromClosureInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023F9DB0, int32_t, Run, (app::LoadLocalFromClosureInstruction * this_ptr, app::InterpretedFrame * frame));
}