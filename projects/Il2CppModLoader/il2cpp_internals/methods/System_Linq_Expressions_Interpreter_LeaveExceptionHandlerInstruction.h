#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::LeaveExceptionHandlerInstruction {
IL2CPP_REGISTER_METHOD(0x01CE4920, void, __ctor, (app::LeaveExceptionHandlerInstruction * this_ptr, int32_t label_index, bool has_value));
IL2CPP_REGISTER_METHOD(0x01CE4930, String *, get_InstructionName, (app::LeaveExceptionHandlerInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ConsumedStack, (app::LeaveExceptionHandlerInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (app::LeaveExceptionHandlerInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CE49C0, LeaveExceptionHandlerInstruction *, Create, (int32_t label_index, bool has_value));
IL2CPP_REGISTER_METHOD(0x01CE4CD0, int32_t, Run, (app::LeaveExceptionHandlerInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CE4D40, void, __cctor, ());
}
