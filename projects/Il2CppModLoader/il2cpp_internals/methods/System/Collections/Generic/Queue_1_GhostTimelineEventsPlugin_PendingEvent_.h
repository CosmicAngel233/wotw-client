#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ {
    IL2CPP_REGISTER_METHOD(0x02CA2440, app::GhostTimelineEventsPlugin_PendingEvent, Dequeue, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04774910, Queue_1_GhostTimelineEventsPlugin_PendingEvent__Dequeue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04773A98, Queue_1_GhostTimelineEventsPlugin_PendingEvent__get_Count__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04725758, Queue_1_GhostTimelineEventsPlugin_PendingEvent__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA2260, void, Enqueue, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr, app::GhostTimelineEventsPlugin_PendingEvent item));
    IL2CPP_REGISTER_METHODINFO(0x04709860, Queue_1_GhostTimelineEventsPlugin_PendingEvent__Enqueue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor_1, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04724FB8, Queue_1_GhostTimelineEventsPlugin_PendingEvent___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA2750, void, __ctor_2, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x0472E680, Queue_1_GhostTimelineEventsPlugin_PendingEvent___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA2880, app::Object *, ICollection_get_SyncRoot, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA29E0, void, ICollection_CopyTo, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0473A780, Queue_1_GhostTimelineEventsPlugin_PendingEvent__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CA2340, app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent_, GetEnumerator, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA2390, app::IEnumerator_1_GhostTimelineEventsPlugin_PendingEvent_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA2390, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA2530, app::GhostTimelineEventsPlugin_PendingEvent, Peek, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CA25B0, bool, Contains, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr, app::GhostTimelineEventsPlugin_PendingEvent item));
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::GhostTimelineEventsPlugin_PendingEvent__Array *, ToArray, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr, int32_t * index));
    IL2CPP_REGISTER_METHOD(0x02CA2CE0, void, ThrowForEmptyQueue, (app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473AC10, Queue_1_GhostTimelineEventsPlugin_PendingEvent__ThrowForEmptyQueue__MethodInfo);
}