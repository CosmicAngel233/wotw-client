#include <interception_macros.h>

namespace app::methods::System::Threading::WaitHandleCannotBeOpenedException {
    IL2CPP_REGISTER_METHOD(0x027AB880, void, __ctor_1, (app::WaitHandleCannotBeOpenedException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027AB910, void, __ctor_2, (app::WaitHandleCannotBeOpenedException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x0268AE20, void, __ctor_3, (app::WaitHandleCannotBeOpenedException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
