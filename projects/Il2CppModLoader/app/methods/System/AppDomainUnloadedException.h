#pragma once
#include <interception_macros.h>

namespace app::methods::System::AppDomainUnloadedException {
    IL2CPP_REGISTER_METHOD(0x0228FDE0, void, ctor_1, (app::AppDomainUnloadedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_2, (app::AppDomainUnloadedException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
