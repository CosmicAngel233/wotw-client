#pragma once
#include <interception_macros.h>

namespace app::methods::System::Threading::ThreadInterruptedException {
    IL2CPP_REGISTER_METHOD(0x02344910, void, ctor_1, (app::ThreadInterruptedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_2, (app::ThreadInterruptedException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
