#include <interception_macros.h>

namespace app::methods::UberShader::CompressedLightDirectionMap {
    IL2CPP_REGISTER_METHOD(0x018F8C80, bool, get_AllTexturesSet, (app::CompressedLightDirectionMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F8D60, bool, get_IsInitialized, (app::CompressedLightDirectionMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F8E40, app::String *, GetHash, (app::CompressedLightDirectionMap * this_ptr, app::String * atlas))
    IL2CPP_REGISTER_METHOD(0x018F9090, app::Texture2D *, get_RuntimeCompressedTexture, (app::CompressedLightDirectionMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F90E0, void, ctor, (app::CompressedLightDirectionMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}