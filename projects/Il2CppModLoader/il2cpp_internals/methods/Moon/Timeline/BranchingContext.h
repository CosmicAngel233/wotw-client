#include <interception_macros.h>

namespace app::methods::Moon::Timeline::BranchingContext {
    IL2CPP_REGISTER_METHOD(0x0011DC50, bool, get_ShouldRecord, (app::BranchingContext__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001508B0, void, __ctor, (app::BranchingContext__Boxed * this_ptr, int32_t branch, bool should_record));
}