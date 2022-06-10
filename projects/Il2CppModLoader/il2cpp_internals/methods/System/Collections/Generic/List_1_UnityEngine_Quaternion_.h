#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x025E8A60, app::Quaternion, get_Item, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0473CA60, List_1_UnityEngine_Quaternion__get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor_1, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04756770, List_1_UnityEngine_Quaternion___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion item));
    IL2CPP_REGISTER_METHODINFO(0x0477B3A8, List_1_UnityEngine_Quaternion__Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04752BB8, List_1_UnityEngine_Quaternion__get_Count__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor_2, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02EDF9D0, void, __ctor_3, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::IEnumerable_1_UnityEngine_Quaternion_ * collection));
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02EDFE50, app::Object *, ICollection_get_SyncRoot, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E8A90, void, set_Item, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, app::Quaternion value));
    IL2CPP_REGISTER_METHOD(0x02C1CDB0, bool, IsCompatibleObject, (app::Object * value));
    IL2CPP_REGISTER_METHOD(0x025E8BE0, app::Object *, IList_get_Item, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02EDFFB0, void, IList_set_Item, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02EE0140, int32_t, IList_Add, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::IEnumerable_1_UnityEngine_Quaternion_ * collection));
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_UnityEngine_Quaternion_ *, AsReadOnly, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E9160, int32_t, BinarySearch_1, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, int32_t count, app::Quaternion item, app::IComparer_1_UnityEngine_Quaternion_ * comparer));
    IL2CPP_REGISTER_METHOD(0x025E91F0, int32_t, BinarySearch_2, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion item, app::IComparer_1_UnityEngine_Quaternion_ * comparer));
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E9280, bool, Contains, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion item));
    IL2CPP_REGISTER_METHOD(0x025E9350, bool, IList_Contains, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion__Array * array));
    IL2CPP_REGISTER_METHOD(0x02EE02E0, void, ICollection_CopyTo, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, app::Quaternion__Array * array, int32_t array_index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion__Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t min));
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Predicate_1_UnityEngine_Quaternion_ * match));
    IL2CPP_REGISTER_METHOD(0x025E96E0, app::Quaternion, Find, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Predicate_1_UnityEngine_Quaternion_ * match));
    IL2CPP_REGISTER_METHOD(0x025E9800, app::List_1_UnityEngine_Quaternion_ *, FindAll, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Predicate_1_UnityEngine_Quaternion_ * match));
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Predicate_1_UnityEngine_Quaternion_ * match));
    IL2CPP_REGISTER_METHOD(0x025E9A50, int32_t, FindIndex_2, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_UnityEngine_Quaternion_ * match));
    IL2CPP_REGISTER_METHOD(0x02EE03D0, void, ForEach, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Action_1_UnityEngine_Quaternion_ * action));
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_UnityEngine_Quaternion_, GetEnumerator, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E9D60, app::IEnumerator_1_UnityEngine_Quaternion_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E9D60, app::IEnumerator *, IEnumerable_GetEnumerator, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_UnityEngine_Quaternion_ *, GetRange, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025E9FA0, int32_t, IndexOf, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion item));
    IL2CPP_REGISTER_METHOD(0x025E9FE0, int32_t, IList_IndexOf, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025EA130, void, Insert, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, app::Quaternion item));
    IL2CPP_REGISTER_METHOD(0x02EE0580, void, IList_Insert, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x02EE0710, void, InsertRange, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, app::IEnumerable_1_UnityEngine_Quaternion_ * collection));
    IL2CPP_REGISTER_METHOD(0x025EA760, bool, Remove, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion item));
    IL2CPP_REGISTER_METHOD(0x025EA7E0, void, IList_Remove, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025EA920, int32_t, RemoveAll, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Predicate_1_UnityEngine_Quaternion_ * match));
    IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::IComparer_1_UnityEngine_Quaternion_ * comparer));
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_3, (app::List_1_UnityEngine_Quaternion_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_UnityEngine_Quaternion_ * comparer));
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, (app::List_1_UnityEngine_Quaternion_ * this_ptr, app::Comparison_1_UnityEngine_Quaternion_ * comparison));
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Quaternion__Array *, ToArray, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_UnityEngine_Quaternion_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
}