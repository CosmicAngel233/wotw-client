#include <interception_macros.h>

namespace app::methods::System_ComponentModel::InvalidEnumArgumentException {
    IL2CPP_REGISTER_METHOD(0x01FEFCB0, void, __ctor_1, (app::InvalidEnumArgumentException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FEFCD0, void, __ctor_2, (app::InvalidEnumArgumentException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01FEFCF0, void, __ctor_3, (app::InvalidEnumArgumentException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01FEFD30, void, __ctor_4, (app::InvalidEnumArgumentException * this_ptr, app::String * argument_name, int32_t invalid_value, app::Type * enum_class));
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, __ctor_5, (app::InvalidEnumArgumentException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
