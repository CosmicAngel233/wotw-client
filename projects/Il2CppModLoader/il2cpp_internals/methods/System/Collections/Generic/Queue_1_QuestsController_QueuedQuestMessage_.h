#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_QuestsController_QueuedQuestMessage_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04702638, Queue_1_QuestsController_QueuedQuestMessage__get_Count__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243D360, app::QuestsController_QueuedQuestMessage, Dequeue, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04752D20, Queue_1_QuestsController_QueuedQuestMessage__Dequeue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04736D78, Queue_1_QuestsController_QueuedQuestMessage__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243D1B0, void, Enqueue, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr, app::QuestsController_QueuedQuestMessage item));
    IL2CPP_REGISTER_METHODINFO(0x0476BCF0, Queue_1_QuestsController_QueuedQuestMessage__Enqueue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor_1, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473B168, Queue_1_QuestsController_QueuedQuestMessage___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA5550, void, __ctor_2, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x047797F8, Queue_1_QuestsController_QueuedQuestMessage___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA5680, app::Object *, ICollection_get_SyncRoot, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA57E0, void, ICollection_CopyTo, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0473ACB8, Queue_1_QuestsController_QueuedQuestMessage__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243D290, app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage_, GetEnumerator, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D2D0, app::IEnumerator_1_QuestsController_QueuedQuestMessage_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D2D0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D430, app::QuestsController_QueuedQuestMessage, Peek, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D4B0, bool, Contains, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr, app::QuestsController_QueuedQuestMessage item));
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::QuestsController_QueuedQuestMessage__Array *, ToArray, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr, int32_t * index));
    IL2CPP_REGISTER_METHOD(0x02CA5AE0, void, ThrowForEmptyQueue, (app::Queue_1_QuestsController_QueuedQuestMessage_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04760A60, Queue_1_QuestsController_QueuedQuestMessage__ThrowForEmptyQueue__MethodInfo);
}