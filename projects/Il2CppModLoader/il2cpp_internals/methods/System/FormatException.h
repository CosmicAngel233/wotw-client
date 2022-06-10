#include <interception_macros.h>

namespace app::methods::System::FormatException {
    IL2CPP_REGISTER_METHOD(0x01A1C990, void, __ctor_1, (app::FormatException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A1CA20, void, __ctor_2, (app::FormatException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A1CA40, void, __ctor_3, (app::FormatException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_4, (app::FormatException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}