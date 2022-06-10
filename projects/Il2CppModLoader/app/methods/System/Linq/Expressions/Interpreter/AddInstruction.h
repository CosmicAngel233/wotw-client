#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::AddInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::AddInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AddInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D1000, app::String *, get_InstructionName, (app::AddInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D1080, app::Instruction *, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047636A8, AddInstruction_Create__MethodInfo)
}