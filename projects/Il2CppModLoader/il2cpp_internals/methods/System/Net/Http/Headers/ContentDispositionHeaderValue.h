#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::ContentDispositionHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::ContentDispositionHeaderValue * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02D059F0, void, __ctor_2, (app::ContentDispositionHeaderValue * this_ptr, app::ContentDispositionHeaderValue * source));
    IL2CPP_REGISTER_METHODINFO(0x0478C328, ContentDispositionHeaderValue__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02D05E20, app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ *, get_Parameters, (app::ContentDispositionHeaderValue * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02D05F80, app::Object *, ICloneable_Clone, (app::ContentDispositionHeaderValue * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02D060D0, bool, Equals, (app::ContentDispositionHeaderValue * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x02D06310, int32_t, GetHashCode, (app::ContentDispositionHeaderValue * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02D063E0, app::String *, ToString, (app::ContentDispositionHeaderValue * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02D06480, bool, TryParse, (app::String * input, app::ContentDispositionHeaderValue * * parsed_value));
    IL2CPP_REGISTER_METHODINFO(0x04745AB0, ContentDispositionHeaderValue_TryParse__MethodInfo);
}