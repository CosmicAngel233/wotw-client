#include <interception_macros.h>

namespace app::methods::ShowHelpTextAction {
    IL2CPP_REGISTER_METHOD(0x005C4390, void, Perform, (app::ShowHelpTextAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005C46F0, void, OnMessageScreenHide, (app::ShowHelpTextAction * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04753540, ShowHelpTextAction_OnMessageScreenHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ShowHelpTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C4780, bool, get_IsPerforming, (app::ShowHelpTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowHelpTextAction * this_ptr))
}