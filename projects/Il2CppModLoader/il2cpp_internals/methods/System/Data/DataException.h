#include <interception_macros.h>

namespace app::methods::System::Data::DataException {
    IL2CPP_REGISTER_METHOD(0x0239F9E0, void, __ctor_1, (app::DataException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04738608, DataException__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E3FF00, void, __ctor_2, (app::DataException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E3FF90, void, __ctor_3, (app::DataException * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, __ctor_4, (app::DataException * this_ptr, app::String * s, app::Exception * inner_exception));
}