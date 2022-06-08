#include <interception_macros.h>

namespace app::methods::Mono::RuntimeMarshal {
IL2CPP_REGISTER_METHOD(0x023CEA70, String *, PtrToUtf8String, (void * ptr));
IL2CPP_REGISTER_METHODINFO(0x0478A0F8, RuntimeMarshal_PtrToUtf8String__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CEB70, SafeStringMarshal, MarshalString, (String * str));
IL2CPP_REGISTER_METHOD(0x023CEB90, int32_t, DecodeBlobSize, (void * in_ptr, void * * out_ptr));
IL2CPP_REGISTER_METHOD(0x023CEBF0, Byte__Array *, DecodeBlobArray, (void * ptr));
IL2CPP_REGISTER_METHOD(0x023CED20, int32_t, AsciHexDigitValue, (int32_t c));
IL2CPP_REGISTER_METHOD(0x023CED40, void, FreeAssemblyName, (MonoAssemblyName * name, bool freeStruct));
}
