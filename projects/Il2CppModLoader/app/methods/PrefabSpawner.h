#include <interception_macros.h>

namespace app::methods::PrefabSpawner {
    IL2CPP_REGISTER_METHOD(0x00C6EA00, void, DynamicPrefabProvider, (app::PrefabSpawner * this_ptr, app::List_1_DynamicInstantiationDescriptor_ * descriptors))
    IL2CPP_REGISTER_METHOD(0x00C6EC80, void, Start, (app::PrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6ECA0, app::GameObject *, Spawn, (app::PrefabSpawner * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C6F300, void, DestroyInstance, (app::PrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6F3E0, void, ctor, (app::PrefabSpawner * this_ptr))
}