#include <interception_macros.h>

namespace app::methods::System::Comparison_1_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_DateTime_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B85030, int32_t, Invoke, (app::Comparison_1_DateTime_ * this_ptr, app::DateTime x, app::DateTime y))
    IL2CPP_REGISTER_METHOD(0x02C7DC80, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_DateTime_ * this_ptr, app::DateTime x, app::DateTime y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_DateTime_ * this_ptr, app::IAsyncResult * result))
}