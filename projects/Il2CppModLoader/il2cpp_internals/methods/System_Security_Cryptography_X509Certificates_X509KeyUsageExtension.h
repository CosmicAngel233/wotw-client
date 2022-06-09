#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509KeyUsageExtension {
IL2CPP_REGISTER_METHOD(0x0257C610, void, __ctor_1, (app::X509KeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x0257C770, void, __ctor_2, (app::X509KeyUsageExtension * this_ptr, app::AsnEncodedData * encoded_key_usage, bool critical));
IL2CPP_REGISTER_METHOD(0x0257C900, void, __ctor_3, (app::X509KeyUsageExtension * this_ptr, app::X509KeyUsageFlags__Enum key_usages, bool critical));
IL2CPP_REGISTER_METHOD(0x0257CAA0, X509KeyUsageFlags__Enum, get_KeyUsages, (app::X509KeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047366B8, X509KeyUsageExtension_get_KeyUsages__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257CB60, void, CopyFrom, (app::X509KeyUsageExtension * this_ptr, app::AsnEncodedData * asn_encoded_data));
IL2CPP_REGISTER_METHODINFO(0x04759620, X509KeyUsageExtension_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257CE70, X509KeyUsageFlags__Enum, GetValidFlags, (app::X509KeyUsageExtension * this_ptr, app::X509KeyUsageFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0257CE80, AsnDecodeStatus__Enum, Decode, (app::X509KeyUsageExtension * this_ptr, app::Byte__Array * extension));
IL2CPP_REGISTER_METHOD(0x0257D0F0, Byte__Array *, Encode, (app::X509KeyUsageExtension * this_ptr));
IL2CPP_REGISTER_METHOD(0x0257D640, String *, ToString, (app::X509KeyUsageExtension * this_ptr, bool multi_line));
}
