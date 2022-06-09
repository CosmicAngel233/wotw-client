#include <interception_macros.h>

namespace app::methods::UnityEngine::Bindings::NativeMethodAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::NativeMethodAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x031BB340, void, __ctor_2, (app::NativeMethodAttribute * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x04769900, NativeMethodAttribute__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x031BB460, void, __ctor_3, (app::NativeMethodAttribute * this_ptr, app::String * name, bool is_free_function));
    IL2CPP_REGISTER_METHOD(0x031BB490, void, __ctor_4, (app::NativeMethodAttribute * this_ptr, app::String * name, bool is_free_function, bool is_thread_safe));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::NativeMethodAttribute * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsThreadSafe, (app::NativeMethodAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_IsFreeFunction, (app::NativeMethodAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_ThrowsException, (app::NativeMethodAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x031BB4D0, void, set_HasExplicitThis, (app::NativeMethodAttribute * this_ptr, bool value));
}
