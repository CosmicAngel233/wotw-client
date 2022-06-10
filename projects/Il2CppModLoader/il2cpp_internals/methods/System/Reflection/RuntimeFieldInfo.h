#include <interception_macros.h>

namespace app::methods::System::Reflection::RuntimeFieldInfo {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BindingFlags__Enum, get_BindingFlags, (app::RuntimeFieldInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02697520, app::Module *, get_Module, (app::RuntimeFieldInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02697550, app::RuntimeType *, GetDeclaringTypeInternal, (app::RuntimeFieldInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02697630, app::RuntimeType *, get_ReflectedTypeInternal, (app::RuntimeFieldInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02697520, app::RuntimeModule *, GetRuntimeModule, (app::RuntimeFieldInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02697710, void, GetObjectData, (app::RuntimeFieldInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x0470ACC0, RuntimeFieldInfo_GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RuntimeFieldInfo * this_ptr));
}