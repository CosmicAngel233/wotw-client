#include <interception_macros.h>

namespace app::methods::NintendoSaveFileSystem {
    IL2CPP_REGISTER_METHOD(0x0257B520, app::String *, get_MountName, ());
    IL2CPP_REGISTER_METHOD(0x0257B5A0, void, SetExistsCachedValue, (app::String * key, bool value));
    IL2CPP_REGISTER_METHOD(0x0257B750, void, Debug, (app::String * text));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::NintendoSaveFileSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0257B7F0, void, __cctor, ());
}