#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509CertificateCollection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor_1, (app::X509CertificateCollection_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CB260, void, ctor_2, (app::X509CertificateCollection_1 * this_ptr, app::X509Certificate_1__Array * value))
    IL2CPP_REGISTER_METHOD(0x021CB380, void, ctor_3, (app::X509CertificateCollection_1 * this_ptr, app::X509CertificateCollection_1 * value))
    IL2CPP_REGISTER_METHOD(0x021CB4D0, app::X509Certificate_1 *, get_Item, (app::X509CertificateCollection_1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x021CB5D0, int32_t, Add, (app::X509CertificateCollection_1 * this_ptr, app::X509Certificate_1 * value))
    IL2CPP_REGISTER_METHODINFO(0x0470CB20, X509CertificateCollection_1_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021CB6B0, void, AddRange_1, (app::X509CertificateCollection_1 * this_ptr, app::X509Certificate_1__Array * value))
    IL2CPP_REGISTER_METHODINFO(0x04724418, X509CertificateCollection_1_AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021CB7D0, void, AddRange_2, (app::X509CertificateCollection_1 * this_ptr, app::X509CertificateCollection_1 * value))
    IL2CPP_REGISTER_METHODINFO(0x04780498, X509CertificateCollection_1_AddRange_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021CB910, app::X509CertificateCollection_X509CertificateEnumerator_1 *, GetEnumerator, (app::X509CertificateCollection_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode, (app::X509CertificateCollection_1 * this_ptr))
}