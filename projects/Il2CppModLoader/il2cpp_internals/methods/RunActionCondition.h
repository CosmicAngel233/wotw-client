#include <interception_macros.h>

namespace app::methods::RunActionCondition {
IL2CPP_REGISTER_METHOD(0x01372AB0, void, Perform, (app::RunActionCondition * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01372C70, String *, GetNiceName, (app::RunActionCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x01372E40, void, Serialize, (app::RunActionCondition * this_ptr, app::Archive * ar));
IL2CPP_REGISTER_METHOD(0x01372F30, void, Reset, (app::RunActionCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::RunActionCondition * this_ptr));
}
