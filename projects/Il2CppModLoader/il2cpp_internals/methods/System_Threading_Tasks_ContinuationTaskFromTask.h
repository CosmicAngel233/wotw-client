#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::ContinuationTaskFromTask {
    IL2CPP_REGISTER_METHOD(0x0232F930, void, __ctor, (app::ContinuationTaskFromTask * this_ptr, app::Task * antecedent, app::Delegate * action, app::Object * state, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x0232FA40, void, InnerInvoke, (app::ContinuationTaskFromTask * this_ptr));
}
