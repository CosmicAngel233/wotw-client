#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::MeshFilter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DontStripMeshFilter, (app::MeshFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253C690, app::Mesh *, get_sharedMesh, (app::MeshFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253C6E0, void, set_sharedMesh, (app::MeshFilter * this_ptr, app::Mesh * value))
    IL2CPP_REGISTER_METHOD(0x0253C740, app::Mesh *, get_mesh, (app::MeshFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253C790, void, set_mesh, (app::MeshFilter * this_ptr, app::Mesh * value))
}
