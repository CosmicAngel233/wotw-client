#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView * this_ptr, app::TaskScheduler * scheduler));
    IL2CPP_REGISTER_METHOD(0x0233F970, int32_t, get_Id, (app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView * this_ptr));
    IL2CPP_REGISTER_METHOD(0x016D9400, app::IEnumerable_1_System_Threading_Tasks_Task_ *, get_ScheduledTasks, (app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView * this_ptr));
}
