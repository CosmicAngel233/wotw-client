#include <interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, __ctor, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Single_ * this_ptr, app::List_1_System_Int32Enum_ * source, app::Func_2_Int32Enum_Boolean_ * predicate, app::Func_2_Int32Enum_Single_ * selector));
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Single_ *, Clone, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0289B350, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Single_ *, Where, (app::Enumerable_WhereSelectListIterator_2_System_Int32Enum_System_Single_ * this_ptr, app::Func_2_Single_Boolean_ * predicate));
}