#include <interception_macros.h>

namespace app::methods::System::Predicate_1_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Byte_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02A50670, bool, Invoke, (app::Predicate_1_Byte_ * this_ptr, uint8_t obj))
    IL2CPP_REGISTER_METHOD(0x02A50A90, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_Byte_ * this_ptr, uint8_t obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Byte_ * this_ptr, app::IAsyncResult * result))
}