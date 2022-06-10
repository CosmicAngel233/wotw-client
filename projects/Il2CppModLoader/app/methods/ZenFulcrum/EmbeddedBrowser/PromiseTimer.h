#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::PromiseTimer {
    IL2CPP_REGISTER_METHOD(0x01669140, app::IPromise *, WaitFor, (app::PromiseTimer * this_ptr, float seconds))
    IL2CPP_REGISTER_METHOD(0x01669390, app::IPromise *, WaitWhile, (app::PromiseTimer * this_ptr, app::Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x016695C0, app::IPromise *, WaitUntil, (app::PromiseTimer * this_ptr, app::Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x01669810, void, Update, (app::PromiseTimer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01669A20, void, ctor, (app::PromiseTimer * this_ptr))
}