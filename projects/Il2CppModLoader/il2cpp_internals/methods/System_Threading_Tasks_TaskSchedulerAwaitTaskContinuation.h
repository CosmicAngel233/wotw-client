#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::TaskSchedulerAwaitTaskContinuation {
IL2CPP_REGISTER_METHOD(0x0232FE20, void, __ctor, (app::TaskSchedulerAwaitTaskContinuation * this_ptr, app::TaskScheduler * scheduler, app::Action * action, bool flow_execution_context, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHOD(0x0233F990, void, Run, (app::TaskSchedulerAwaitTaskContinuation * this_ptr, app::Task * ignored, bool can_inline_continuation_task));
}
