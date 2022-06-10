#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::CastInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::CastInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::CastInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D82A0, app::String *, get_InstructionName, (app::CastInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022D8320, app::Instruction *, Create, (app::Type * t));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CastInstruction * this_ptr));
}