#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LeftShiftInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::LeftShiftInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LeftShiftInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CE51C0, app::String *, get_InstructionName, (app::LeftShiftInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LeftShiftInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CE5240, app::Instruction *, Create, (app::Type * type));
    IL2CPP_REGISTER_METHODINFO(0x04785FE0, LeftShiftInstruction_Create__MethodInfo);
}