#include <interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereListIterator_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02892980, void, ctor, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr, app::List_1_System_Object_ * source, app::Func_2_Object_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x028929D0, app::Enumerable_Iterator_1_System_Object_ *, Clone, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02894B00, bool, MoveNext, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Object_ *, Select_1, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Object_ * selector))
    IL2CPP_REGISTER_METHOD(0x028945D0, app::IEnumerable_1_System_Object_ *, Where, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Int32_ *, Select_2, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Int32_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_System_Single_ *, Select_3, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr, app::Func_2_Object_Single_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E77D90, app::IEnumerable_1_UnityEngine_Rect_ *, Select_4, (app::Enumerable_WhereListIterator_1_System_Object_ * this_ptr, app::Func_2_Object_UnityEngine_Rect_ * selector))
}