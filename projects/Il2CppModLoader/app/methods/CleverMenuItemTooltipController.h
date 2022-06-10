#include <interception_macros.h>

namespace app::methods::CleverMenuItemTooltipController {
    IL2CPP_REGISTER_METHOD(0x012BF310, bool, get_IsSelectionActive, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012BF4D0, void, Awake, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012BF7D0, void, OnDestroy, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012BFAD0, void, OnOptionChanged, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047306B8, CleverMenuItemTooltipController_OnOptionChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012BFAD0, void, OnEnable, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012BFAE0, void, Update, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012BFBA0, void, UpdateTooltip, (app::CleverMenuItemTooltipController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012BFE00, void, ctor, (app::CleverMenuItemTooltipController * this_ptr))
}