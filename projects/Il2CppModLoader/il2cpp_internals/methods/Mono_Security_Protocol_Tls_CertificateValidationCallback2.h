#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls::CertificateValidationCallback2 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CertificateValidationCallback2 * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x014347E0, app::ValidationResult *, Invoke, (app::CertificateValidationCallback2 * this_ptr, app::X509CertificateCollection_2 * collection));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::CertificateValidationCallback2 * this_ptr, app::X509CertificateCollection_2 * collection, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, app::ValidationResult *, EndInvoke, (app::CertificateValidationCallback2 * this_ptr, app::IAsyncResult * result));
}
