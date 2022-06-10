#include <interception_macros.h>

namespace app::methods::System::Net::HttpListenerRequest {
    IL2CPP_REGISTER_METHOD(0x01D464E0, void, ctor_1, (app::HttpListenerRequest * this_ptr, app::HttpListenerContext * context))
    IL2CPP_REGISTER_METHOD(0x01D46670, void, SetRequestLine, (app::HttpListenerRequest * this_ptr, app::String * req))
    IL2CPP_REGISTER_METHODINFO(0x0478AFF8, HttpListenerRequest_SetRequestLine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D46A50, void, CreateQueryString, (app::HttpListenerRequest * this_ptr, app::String * query))
    IL2CPP_REGISTER_METHOD(0x01D46F70, bool, MaybeUri, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x01D47060, bool, IsPredefinedScheme, (app::String * scheme))
    IL2CPP_REGISTER_METHOD(0x01D47280, void, FinishInitialization, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D47ED0, app::String *, Unquote, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x01D47F70, void, AddHeader, (app::HttpListenerRequest * this_ptr, app::String * header))
    IL2CPP_REGISTER_METHOD(0x01D48C00, bool, FlushInput, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String__Array *, get_AcceptTypes, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D48EB0, int32_t, get_ClientCertificateError, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706BD8, HttpListenerRequest_get_ClientCertificateError__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D48FC0, app::Encoding *, get_ContentEncoding, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D48FF0, int64_t, get_ContentLength64, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49010, app::String *, get_ContentType, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D490B0, app::CookieCollection *, get_Cookies, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49210, bool, get_HasEntityBody, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::NameValueCollection *, get_Headers, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String *, get_HttpMethod, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49230, app::Stream *, get_InputStream, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAuthenticated, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49330, bool, get_IsLocal, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D493C0, bool, get_IsSecureConnection, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D493F0, bool, get_KeepAlive, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49780, app::IPEndPoint *, get_LocalEndPoint, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Version *, get_ProtocolVersion, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::NameValueCollection *, get_QueryString, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String *, get_RawUrl, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D498B0, app::IPEndPoint *, get_RemoteEndPoint, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D498E0, app::Guid, get_RequestTraceIdentifier, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Uri *, get_Url, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Uri *, get_UrlReferrer, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49990, app::String *, get_UserAgent, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49A30, app::String *, get_UserHostAddress, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49A60, app::String *, get_UserHostName, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String__Array *, get_UserLanguages, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49B00, app::IAsyncResult *, BeginGetClientCertificate, (app::HttpListenerRequest * this_ptr, app::AsyncCallback * request_callback, app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x04722F78, HttpListenerRequest_BeginGetClientCertificate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D49CB0, app::X509Certificate2 *, EndGetClientCertificate, (app::HttpListenerRequest * this_ptr, app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHODINFO(0x0475AA00, HttpListenerRequest_EndGetClientCertificate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D49DC0, app::X509Certificate2 *, GetClientCertificate, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047735E8, HttpListenerRequest_GetClientCertificate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, get_ServiceName, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49E00, app::TransportContext *, get_TransportContext, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsWebSocketRequest, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D49F40, app::Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2_ *, GetClientCertificateAsync, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D4A1E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01D4A2E0, void, ctor_2, (app::HttpListenerRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754A30, HttpListenerRequest__ctor_1__MethodInfo)
}