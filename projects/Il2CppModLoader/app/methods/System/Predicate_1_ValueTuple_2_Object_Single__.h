#include <interception_macros.h>

namespace app::methods::System::Predicate_1_ValueTuple_2_Object_Single__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_ValueTuple_2_Object_Single_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_ValueTuple_2_Object_Single_ * this_ptr, app::ValueTuple_2_Object_Single_ obj))
    IL2CPP_REGISTER_METHOD(0x02A52DD0, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_ValueTuple_2_Object_Single_ * this_ptr, app::ValueTuple_2_Object_Single_ obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_ValueTuple_2_Object_Single_ * this_ptr, app::IAsyncResult * result))
}