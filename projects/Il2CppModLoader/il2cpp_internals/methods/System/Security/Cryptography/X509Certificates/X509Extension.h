#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Extension {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::X509Extension_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021D56E0, void, __ctor_2, (app::X509Extension_1 * this_ptr, app::String * oid, app::Byte__Array * raw_data, bool critical));
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Critical, (app::X509Extension_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Critical, (app::X509Extension_1 * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x021D5710, void, CopyFrom, (app::X509Extension_1 * this_ptr, app::AsnEncodedData * asn_encoded_data));
    IL2CPP_REGISTER_METHODINFO(0x04732B40, X509Extension_1_CopyFrom__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021D5860, app::String *, FormatUnkownData, (app::X509Extension_1 * this_ptr, app::Byte__Array * data));
}