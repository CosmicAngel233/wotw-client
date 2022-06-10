#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::BrowserNative_DisplayDialogFunc * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01DCCB40, void, Invoke, (app::BrowserNative_DisplayDialogFunc * this_ptr, int32_t browser_id, app::BrowserNative_DialogType__Enum dialog_type, void * dialog_text, void * initial_prompt_text, void * source_u_r_l));
    IL2CPP_REGISTER_METHOD(0x01DCCFE0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_DisplayDialogFunc * this_ptr, int32_t browser_id, app::BrowserNative_DialogType__Enum dialog_type, void * dialog_text, void * initial_prompt_text, void * source_u_r_l, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_DisplayDialogFunc * this_ptr, app::IAsyncResult * result));
}