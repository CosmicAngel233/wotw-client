#include <interception_macros.h>

namespace app::methods::YouCanLeaveYourHatOn {
    IL2CPP_REGISTER_METHOD(0x01C5C870, app::String *, FindName, (app::Object_1 * o))
    IL2CPP_REGISTER_METHOD(0x01C5CD40, bool, DebugMenuPrintReport, ())
    IL2CPP_REGISTER_METHODINFO(0x047609D0, YouCanLeaveYourHatOn_DebugMenuPrintReport__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C5CDC0, bool, DebugMenuPrintDontDestroyOnLoad, ())
    IL2CPP_REGISTER_METHODINFO(0x0478A7B8, YouCanLeaveYourHatOn_DebugMenuPrintDontDestroyOnLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C5D660, void, PrintReport, (app::String * report_name))
}