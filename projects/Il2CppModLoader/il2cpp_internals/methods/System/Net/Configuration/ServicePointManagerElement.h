#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::ServicePointManagerElement {
    IL2CPP_REGISTER_METHOD(0x01E985D0, void, __ctor, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04783CD8, ServicePointManagerElement__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98600, bool, get_CheckCertificateName, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04715408, ServicePointManagerElement_get_CheckCertificateName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98630, void, set_CheckCertificateName, (app::ServicePointManagerElement * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04711B30, ServicePointManagerElement_set_CheckCertificateName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98660, bool, get_CheckCertificateRevocationList, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04772918, ServicePointManagerElement_get_CheckCertificateRevocationList__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98690, void, set_CheckCertificateRevocationList, (app::ServicePointManagerElement * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04728298, ServicePointManagerElement_set_CheckCertificateRevocationList__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E986C0, int32_t, get_DnsRefreshTimeout, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470B060, ServicePointManagerElement_get_DnsRefreshTimeout__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E986F0, void, set_DnsRefreshTimeout, (app::ServicePointManagerElement * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04724D30, ServicePointManagerElement_set_DnsRefreshTimeout__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98720, bool, get_EnableDnsRoundRobin, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04747708, ServicePointManagerElement_get_EnableDnsRoundRobin__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98750, void, set_EnableDnsRoundRobin, (app::ServicePointManagerElement * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x04718EA0, ServicePointManagerElement_set_EnableDnsRoundRobin__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98780, app::EncryptionPolicy__Enum, get_EncryptionPolicy, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04721C40, ServicePointManagerElement_get_EncryptionPolicy__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E987B0, void, set_EncryptionPolicy, (app::ServicePointManagerElement * this_ptr, app::EncryptionPolicy__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x047180B8, ServicePointManagerElement_set_EncryptionPolicy__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E987E0, bool, get_Expect100Continue, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473A070, ServicePointManagerElement_get_Expect100Continue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98810, void, set_Expect100Continue, (app::ServicePointManagerElement * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x047568D0, ServicePointManagerElement_set_Expect100Continue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98840, app::ConfigurationPropertyCollection *, get_Properties, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04704350, ServicePointManagerElement_get_Properties__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E98870, bool, get_UseNagleAlgorithm, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04730388, ServicePointManagerElement_get_UseNagleAlgorithm__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E988A0, void, set_UseNagleAlgorithm, (app::ServicePointManagerElement * this_ptr, bool value));
    IL2CPP_REGISTER_METHODINFO(0x0471D080, ServicePointManagerElement_set_UseNagleAlgorithm__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E988D0, void, PostDeserialize, (app::ServicePointManagerElement * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04716A58, ServicePointManagerElement_PostDeserialize__MethodInfo);
}