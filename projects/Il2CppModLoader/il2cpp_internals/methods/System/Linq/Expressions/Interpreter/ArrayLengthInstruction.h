#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::ArrayLengthInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::ArrayLengthInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::ArrayLengthInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D56E0, app::String *, get_InstructionName, (app::ArrayLengthInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ArrayLengthInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D5760, int32_t, Run, (app::ArrayLengthInstruction * this_ptr, app::InterpretedFrame * frame));
    IL2CPP_REGISTER_METHOD(0x022D58D0, void, __cctor, ());
}