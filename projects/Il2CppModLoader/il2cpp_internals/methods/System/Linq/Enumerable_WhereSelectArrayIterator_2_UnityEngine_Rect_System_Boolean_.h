#include <interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, __ctor, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr, app::Rect__Array * source, app::Func_2_UnityEngine_Rect_Boolean_ * predicate, app::Func_2_UnityEngine_Rect_Boolean_ * selector));
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Boolean_ *, Clone, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02896060, bool, MoveNext, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02895050, app::IEnumerable_1_System_Boolean_ *, Where, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr, app::Func_2_Boolean_Boolean_ * predicate));
}