#include <interception_macros.h>

namespace app::methods::TextMeshSetter {
    IL2CPP_REGISTER_METHOD(0x010E8390, void, Awake, (app::TextMeshSetter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010E8420, void, OnEnable, (app::TextMeshSetter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010E8420, void, FixedUpdate, (app::TextMeshSetter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010E8460, void, SetText, (app::TextMeshSetter * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::TextMeshSetter * this_ptr));
}