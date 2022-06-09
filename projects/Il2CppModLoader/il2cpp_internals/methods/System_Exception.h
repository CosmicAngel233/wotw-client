#include <interception_macros.h>

namespace app::methods::System::Exception {
IL2CPP_REGISTER_METHOD(0x01A1AFC0, void, Init, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1B110, void, __ctor_1, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1B120, void, __ctor_2, (app::Exception * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x01A1B150, void, __ctor_3, (app::Exception * this_ptr, app::String * message, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x01A1B190, void, __ctor_4, (app::Exception * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04777818, Exception__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1B4C0, String *, get_Message, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1B600, IDictionary *, get_Data, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsImmutableAgileException, (app::Exception * e));
IL2CPP_REGISTER_METHOD(0x01A1B770, String *, GetClassName, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_InnerException, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1B7C0, String *, get_StackTrace, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1B800, String *, GetStackTrace, (app::Exception * this_ptr, bool need_file_info));
IL2CPP_REGISTER_METHOD(0x002FD760, void, SetErrorCode, (app::Exception * this_ptr, int32_t hr));
IL2CPP_REGISTER_METHOD(0x01A1B850, String *, get_Source, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1BAA0, String *, ToString_1, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1BAB0, String *, ToString_2, (app::Exception * this_ptr, bool need_file_line_info, bool need_message));
IL2CPP_REGISTER_METHOD(0x01A1BED0, void, GetObjectData, (app::Exception * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04754A88, Exception_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1C2A0, void, OnDeserialized, (app::Exception * this_ptr, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x00502220, String *, StripFileInfo, (app::Exception * this_ptr, app::String * stack_trace, bool is_remote_stack_trace));
IL2CPP_REGISTER_METHOD(0x01A1C410, void, RestoreExceptionDispatchInfo, (app::Exception * this_ptr, app::ExceptionDispatchInfo * exception_dispatch_info));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_HResult, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_HResult, (app::Exception * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x01A1C4F0, Type *, GetType, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1C500, String *, GetMessageFromNativeResources, (app::Exception_ExceptionMessageKind__Enum kind));
IL2CPP_REGISTER_METHOD(0x01A1C590, Exception *, FixRemotingException, (app::Exception * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1C6D0, void, __cctor, ());
}
