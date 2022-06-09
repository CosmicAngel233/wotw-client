#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::AddOvfInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::AddOvfInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AddOvfInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D2780, app::String *, get_InstructionName, (app::AddOvfInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AddOvfInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D2800, app::Instruction *, Create, (app::Type * type));
}
