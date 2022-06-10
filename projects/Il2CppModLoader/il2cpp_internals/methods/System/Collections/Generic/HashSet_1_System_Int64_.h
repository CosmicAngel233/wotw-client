#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::HashSet_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470C518, HashSet_1_System_Int64__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_System_Int64_, GetEnumerator, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477DA28, HashSet_1_System_Int64__GetEnumerator__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABC8E0, bool, Contains, (app::HashSet_1_System_Int64_ * this_ptr, int64_t item));
    IL2CPP_REGISTER_METHODINFO(0x047493E0, HashSet_1_System_Int64__Contains__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_Int64_ * this_ptr, int64_t item));
    IL2CPP_REGISTER_METHODINFO(0x047319D8, HashSet_1_System_Int64__Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABCA70, bool, Remove, (app::HashSet_1_System_Int64_ * this_ptr, int64_t item));
    IL2CPP_REGISTER_METHODINFO(0x04776110, HashSet_1_System_Int64__Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor_1, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047231A0, HashSet_1_System_Int64___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor_2, (app::HashSet_1_System_Int64_ * this_ptr, app::IEqualityComparer_1_System_Int64_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor_3, (app::HashSet_1_System_Int64_ * this_ptr, app::IEnumerable_1_System_Int64_ * collection));
    IL2CPP_REGISTER_METHOD(0x02ABC330, void, __ctor_4, (app::HashSet_1_System_Int64_ * this_ptr, app::IEnumerable_1_System_Int64_ * collection, app::IEqualityComparer_1_System_Int64_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04762FF8, HashSet_1_System_Int64___ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor_5, (app::HashSet_1_System_Int64_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x02ABC580, void, CopyFrom, (app::HashSet_1_System_Int64_ * this_ptr, app::HashSet_1_System_Int64_ * source));
    IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_System_Int64_ * this_ptr, int64_t item));
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_System_Int64_ * this_ptr, app::Int64__Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator_1_System_Int64__1 *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABCE50, void, GetObjectData, (app::HashSet_1_System_Int64_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x047567C8, HashSet_1_System_Int64__GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABD070, void, OnDeserialization, (app::HashSet_1_System_Int64_ * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x0475C308, HashSet_1_System_Int64__OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABD390, void, UnionWith, (app::HashSet_1_System_Int64_ * this_ptr, app::IEnumerable_1_System_Int64_ * other));
    IL2CPP_REGISTER_METHODINFO(0x0478D0A8, HashSet_1_System_Int64__UnionWith__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_System_Int64_ * this_ptr, app::Int64__Array * array));
    IL2CPP_REGISTER_METHOD(0x02ABD5F0, void, CopyTo_3, (app::HashSet_1_System_Int64_ * this_ptr, app::Int64__Array * array, int32_t array_index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0475AC50, HashSet_1_System_Int64__CopyTo_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABD860, int32_t, RemoveWhere, (app::HashSet_1_System_Int64_ * this_ptr, app::Predicate_1_Int64_ * match));
    IL2CPP_REGISTER_METHODINFO(0x04756A60, HashSet_1_System_Int64__RemoveWhere__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int64_ *, get_Comparer, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABD9F0, void, TrimExcess, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABDC40, void, Initialize, (app::HashSet_1_System_Int64_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02ABDD40, void, IncreaseCapacity, (app::HashSet_1_System_Int64_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472B6F8, HashSet_1_System_Int64__IncreaseCapacity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABDE40, void, SetCapacity, (app::HashSet_1_System_Int64_ * this_ptr, int32_t new_size));
    IL2CPP_REGISTER_METHOD(0x02ABDFF0, bool, AddIfNotPresent, (app::HashSet_1_System_Int64_ * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHOD(0x02ABE370, void, AddValue, (app::HashSet_1_System_Int64_ * this_ptr, int32_t index, int32_t hash_code, int64_t value));
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_System_Int64_ * set1, app::HashSet_1_System_Int64_ * set2));
    IL2CPP_REGISTER_METHOD(0x02ABE4A0, int32_t, InternalGetHashCode, (app::HashSet_1_System_Int64_ * this_ptr, int64_t item));
}