#include <interception_macros.h>

namespace app::methods::System::Array_ArrayEnumerator {
    IL2CPP_REGISTER_METHOD(0x02296A30, void, __ctor, (app::Array_ArrayEnumerator * this_ptr, app::Array * array));
    IL2CPP_REGISTER_METHOD(0x02296A70, bool, MoveNext, (app::Array_ArrayEnumerator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (app::Array_ArrayEnumerator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object *, Clone, (app::Array_ArrayEnumerator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02296A90, app::Object *, get_Current, (app::Array_ArrayEnumerator * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476EF90, Array_ArrayEnumerator_get_Current__MethodInfo);
}