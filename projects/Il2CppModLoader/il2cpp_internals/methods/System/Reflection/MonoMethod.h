#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoMethod {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02691130, app::String *, get_name, (app::MethodBase * method_1));
    IL2CPP_REGISTER_METHOD(0x02691170, app::MonoMethod *, get_base_method, (app::MonoMethod * method_1, bool definition));
    IL2CPP_REGISTER_METHOD(0x02691180, app::MethodInfo_1 *, GetBaseDefinition, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02691190, app::MethodInfo_1 *, GetBaseMethod, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026911A0, app::Type *, get_ReturnType, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F2D0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026911D0, app::ParameterInfo_1__Array *, GetParameters, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F300, app::ParameterInfo_1__Array *, GetParametersInternal, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026912D0, int32_t, GetParametersCount, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F380, app::Object *, InternalInvoke, (app::MonoMethod * this_ptr, app::Object * obj, app::Object__Array * parameters, app::Exception * * exc));
    IL2CPP_REGISTER_METHOD(0x02691310, app::Object *, Invoke, (app::MonoMethod * this_ptr, app::Object * obj, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object__Array * parameters, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHODINFO(0x0477CAD8, MonoMethod_Invoke__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026914E0, void, ConvertValues, (app::Binder * binder, app::Object__Array * args, app::ParameterInfo_1__Array * pinfo, app::CultureInfo * culture, app::BindingFlags__Enum invoke_attr));
    IL2CPP_REGISTER_METHODINFO(0x04783CF0, MonoMethod_ConvertValues__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RuntimeMethodHandle, get_MethodHandle, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F890, app::MethodAttributes__Enum, get_Attributes, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F8A0, app::CallingConventions__Enum, get_CallingConvention, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type *, get_ReflectedType, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F910, app::Type *, get_DeclaringType, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268F940, app::String *, get_Name, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02691820, bool, IsDefined, (app::MonoMethod * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHOD(0x026918E0, app::Object__Array *, GetCustomAttributes_1, (app::MonoMethod * this_ptr, bool inherit));
    IL2CPP_REGISTER_METHOD(0x02691990, app::Object__Array *, GetCustomAttributes_2, (app::MonoMethod * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHOD(0x02691A50, void, GetPInvoke, (app::MonoMethod * this_ptr, app::PInvokeAttributes__Enum * flags, app::String * * entry_point, app::String * * dll_name));
    IL2CPP_REGISTER_METHOD(0x02691A70, app::Object__Array *, GetPseudoCustomAttributes, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02691CD0, app::MethodInfo_1 *, MakeGenericMethod, (app::MonoMethod * this_ptr, app::Type__Array * method_instantiation));
    IL2CPP_REGISTER_METHODINFO(0x04703FC0, MonoMethod_MakeGenericMethod__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02692000, app::MethodInfo_1 *, MakeGenericMethod_impl, (app::MonoMethod * this_ptr, app::Type__Array * types));
    IL2CPP_REGISTER_METHOD(0x02692010, app::Type__Array *, GetGenericArguments, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02692150, app::MethodInfo_1 *, GetGenericMethodDefinition_impl, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02692180, app::MethodInfo_1 *, GetGenericMethodDefinition, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04775120, MonoMethod_GetGenericMethodDefinition__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026922C0, bool, get_IsGenericMethodDefinition, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x026922D0, bool, get_IsGenericMethod, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02692300, bool, get_ContainsGenericParameters, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268FBB0, app::MethodBody *, GetMethodBody, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268FE80, app::IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (app::MonoMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_core_clr_security_level, ());
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSecurityCritical, (app::MonoMethod * this_ptr));
}