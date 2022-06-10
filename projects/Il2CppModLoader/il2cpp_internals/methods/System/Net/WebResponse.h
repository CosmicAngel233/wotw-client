#include <interception_macros.h>

namespace app::methods::System::Net::WebResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_2, (app::WebResponse * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
    IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (app::WebResponse * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetObjectData, (app::WebResponse * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021B8730, void, Dispose_1, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021B87E0, void, Dispose_2, (app::WebResponse * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x00533160, bool, get_IsFromCache, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_InternalSetFromCache, (app::WebResponse * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsCacheFresh, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_InternalSetIsCacheFresh, (app::WebResponse * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsMutuallyAuthenticated, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021B8890, int64_t, get_ContentLength, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04756A88, WebResponse_get_ContentLength__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021B88D0, void, set_ContentLength, (app::WebResponse * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x047558B0, WebResponse_set_ContentLength__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021B8910, app::String *, get_ContentType, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04799818, WebResponse_get_ContentType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021B8950, void, set_ContentType, (app::WebResponse * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x0475DED0, WebResponse_set_ContentType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021B8990, app::Stream *, GetResponseStream, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476D1D8, WebResponse_GetResponseStream__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021B89D0, app::Uri *, get_ResponseUri, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04758790, WebResponse_get_ResponseUri__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021B8A10, app::WebHeaderCollection *, get_Headers, (app::WebResponse * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04706CE0, WebResponse_get_Headers__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsHeaders, (app::WebResponse * this_ptr));
}