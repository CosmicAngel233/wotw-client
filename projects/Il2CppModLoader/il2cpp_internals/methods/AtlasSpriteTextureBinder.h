#include <interception_macros.h>

namespace app::methods::AtlasSpriteTextureBinder {
    IL2CPP_REGISTER_METHOD(0x00845430, void, OnPoolSpawned, (app::AtlasSpriteTextureBinder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00845440, void, __ctor, (app::AtlasSpriteTextureBinder * this_ptr, app::AnimationMeshingSettings * settings, bool sprice_spaceuvs, app::Mesh * mesh));
    IL2CPP_REGISTER_METHOD(0x008455A0, void, AllocateBufferForSettings, (app::AtlasSpriteTextureBinder * this_ptr, app::AnimationMeshingSettings * settings));
    IL2CPP_REGISTER_METHOD(0x008458C0, void, UpdateSettings, (app::AtlasSpriteTextureBinder * this_ptr, app::AnimationMeshingSettings * settings));
    IL2CPP_REGISTER_METHOD(0x008458E0, void, UpdateSpriceSpaceUv, (app::AtlasSpriteTextureBinder * this_ptr, bool correct_uvs));
    IL2CPP_REGISTER_METHOD(0x008458F0, void, GenerateCorrectUvBuffer, (app::AtlasSpriteTextureBinder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00845AB0, void, BindTo, (app::AtlasSpriteTextureBinder * this_ptr, app::MeshFilter * filter, app::Renderer * renderer, app::Atlas * atlas, app::UberScreenMode__Enum mode, app::AtlasSpriteTexture * texture));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitProperties, ());
    IL2CPP_REGISTER_METHOD(0x00846260, void, ApplyToMesh, (app::AtlasSpriteTextureBinder * this_ptr, app::Atlas * atlas, app::AtlasSpriteTexture * texture));
    IL2CPP_REGISTER_METHOD(0x00846780, void, __cctor, ());
}