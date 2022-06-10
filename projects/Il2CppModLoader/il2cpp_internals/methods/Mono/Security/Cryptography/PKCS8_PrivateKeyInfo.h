#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo {
    IL2CPP_REGISTER_METHOD(0x025D3650, void, __ctor_1, (app::PKCS8_PrivateKeyInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025D37A0, void, __ctor_2, (app::PKCS8_PrivateKeyInfo * this_ptr, app::Byte__Array * data));
    IL2CPP_REGISTER_METHOD(0x025D3900, app::Byte__Array *, get_PrivateKey_1, (app::PKCS8_PrivateKeyInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025D3A50, void, Decode_1, (app::PKCS8_PrivateKeyInfo * this_ptr, app::Byte__Array * data));
    IL2CPP_REGISTER_METHODINFO(0x047585F0, PKCS8_PrivateKeyInfo_Decode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025D3E10, app::Byte__Array *, RemoveLeadingZero_1, (app::Byte__Array * big_int));
    IL2CPP_REGISTER_METHOD(0x025D3F10, app::Byte__Array *, Normalize_1, (app::Byte__Array * big_int, int32_t length));
    IL2CPP_REGISTER_METHOD(0x025D4000, app::RSA *, DecodeRSA_1, (app::Byte__Array * keypair));
    IL2CPP_REGISTER_METHODINFO(0x047473C8, PKCS8_PrivateKeyInfo_DecodeRSA__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025D46B0, app::DSA *, DecodeDSA_1, (app::Byte__Array * private_key, app::DSAParameters dsa_parameters));
    IL2CPP_REGISTER_METHODINFO(0x04713620, PKCS8_PrivateKeyInfo_DecodeDSA__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A40BB0, void, __ctor_3, (app::PKCS8_PrivateKeyInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A40D00, void, __ctor_4, (app::PKCS8_PrivateKeyInfo_1 * this_ptr, app::Byte__Array * data));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Algorithm, (app::PKCS8_PrivateKeyInfo_1 * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x02A40D30, app::Byte__Array *, get_PrivateKey_2, (app::PKCS8_PrivateKeyInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A40E80, void, set_PrivateKey, (app::PKCS8_PrivateKeyInfo_1 * this_ptr, app::Byte__Array * value));
    IL2CPP_REGISTER_METHODINFO(0x047374C8, PKCS8_PrivateKeyInfo_1_set_PrivateKey__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A41000, void, Decode_2, (app::PKCS8_PrivateKeyInfo_1 * this_ptr, app::Byte__Array * data));
    IL2CPP_REGISTER_METHODINFO(0x04779DE0, PKCS8_PrivateKeyInfo_1_Decode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A413C0, app::Byte__Array *, GetBytes, (app::PKCS8_PrivateKeyInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A41BD0, app::Byte__Array *, RemoveLeadingZero_2, (app::Byte__Array * big_int));
    IL2CPP_REGISTER_METHOD(0x02A41CD0, app::Byte__Array *, Normalize_2, (app::Byte__Array * big_int, int32_t length));
    IL2CPP_REGISTER_METHOD(0x02A41DC0, app::RSA *, DecodeRSA_2, (app::Byte__Array * keypair));
    IL2CPP_REGISTER_METHODINFO(0x047807D8, PKCS8_PrivateKeyInfo_1_DecodeRSA__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A42470, app::Byte__Array *, Encode_1, (app::RSA * rsa));
    IL2CPP_REGISTER_METHOD(0x02A427E0, app::DSA *, DecodeDSA_2, (app::Byte__Array * private_key, app::DSAParameters dsa_parameters));
    IL2CPP_REGISTER_METHODINFO(0x04769708, PKCS8_PrivateKeyInfo_1_DecodeDSA__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A42A00, app::Byte__Array *, Encode_2, (app::DSA * dsa));
    IL2CPP_REGISTER_METHOD(0x02A42A70, app::Byte__Array *, Encode_3, (app::AsymmetricAlgorithm * aa));
    IL2CPP_REGISTER_METHODINFO(0x0476ED60, PKCS8_PrivateKeyInfo_1_Encode_2__MethodInfo);
}