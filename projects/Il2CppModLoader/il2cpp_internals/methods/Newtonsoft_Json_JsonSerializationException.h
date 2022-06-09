#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json::JsonSerializationException {
    IL2CPP_REGISTER_METHOD(0x01A6BEE0, void, __ctor_1, (app::JsonSerializationException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A6C260, void, __ctor_2, (app::JsonSerializationException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A6C270, void, __ctor_3, (app::JsonSerializationException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01A6BEF0, void, __ctor_4, (app::JsonSerializationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x01A6BF10, void, __ctor_5, (app::JsonSerializationException * this_ptr, app::String * message, app::String * path, int32_t line_number, int32_t line_position, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01A6C280, app::JsonSerializationException *, Create_1, (app::JsonReader * reader, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A6C290, app::JsonSerializationException *, Create_2, (app::JsonReader * reader, app::String * message, app::Exception * ex));
    IL2CPP_REGISTER_METHOD(0x01A6C380, app::JsonSerializationException *, Create_3, (app::IJsonLineInfo * line_info, app::String * path, app::String * message, app::Exception * ex));
}
