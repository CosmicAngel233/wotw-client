#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InstructionList_DebugView_InstructionView {
    IL2CPP_REGISTER_METHOD(0x00107C20, app::String *, GetValue, (app::InstructionList_DebugView_InstructionView__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C6480, void, ctor, (app::InstructionList_DebugView_InstructionView__Boxed * this_ptr, app::Instruction * instruction, app::String * name, int32_t index, int32_t stack_depth, int32_t continuations_depth))
}
