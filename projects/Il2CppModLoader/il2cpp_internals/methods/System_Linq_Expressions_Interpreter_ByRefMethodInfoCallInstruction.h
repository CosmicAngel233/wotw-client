#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::ByRefMethodInfoCallInstruction {
IL2CPP_REGISTER_METHOD(0x0199E410, void, __ctor, (app::ByRefMethodInfoCallInstruction * this_ptr, app::MethodInfo_1 * target, int32_t argument_count, app::ByRefUpdater__Array * byref_args));
IL2CPP_REGISTER_METHOD(0x022D6D40, int32_t, get_ProducedStack, (app::ByRefMethodInfoCallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D6E20, int32_t, Run, (app::ByRefMethodInfoCallInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x0477E190, ByRefMethodInfoCallInstruction_Run__MethodInfo);
}
