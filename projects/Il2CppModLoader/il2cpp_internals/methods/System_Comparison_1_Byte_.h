#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Byte_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Byte_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02C7C9B0, int32_t, Invoke, (app::Comparison_1_Byte_ * this_ptr, uint8_t x, uint8_t y));
IL2CPP_REGISTER_METHOD(0x02C7CD20, IAsyncResult *, BeginInvoke, (app::Comparison_1_Byte_ * this_ptr, uint8_t x, uint8_t y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Byte_ * this_ptr, app::IAsyncResult * result));
}
