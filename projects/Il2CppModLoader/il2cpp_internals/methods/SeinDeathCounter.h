#include <interception_macros.h>

namespace app::methods::SeinDeathCounter {
    IL2CPP_REGISTER_METHOD(0x006FF030, int32_t, get_Count, ());
    IL2CPP_REGISTER_METHOD(0x006FF140, void, Awake, (app::SeinDeathCounter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006FF1F0, void, OnDestroy, (app::SeinDeathCounter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006FF290, void, UpdateValueStoreOnDeath, (app::SeinDeathCounter * this_ptr, app::UberStateValueStore * value_store));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::SeinDeathCounter * this_ptr, app::Archive * ar));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::SeinDeathCounter * this_ptr));
}