#include <interception_macros.h>

namespace app::methods::System::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single_ x, app::ValueTuple_4_Object_Int32_Int32_Single_ y));
    IL2CPP_REGISTER_METHOD(0x02C80180, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single_ x, app::ValueTuple_4_Object_Int32_Int32_Single_ y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::IAsyncResult * result));
}