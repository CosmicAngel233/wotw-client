#include <interception_macros.h>

namespace app::methods::System::Text::DecoderReplacementFallback {
    IL2CPP_REGISTER_METHOD(0x0244B250, void, ctor_1, (app::DecoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B2E0, void, ctor_2, (app::DecoderReplacementFallback * this_ptr, app::String * replacement))
    IL2CPP_REGISTER_METHODINFO(0x04791A48, DecoderReplacementFallback__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_DefaultString, (app::DecoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B4C0, app::DecoderFallbackBuffer *, CreateFallbackBuffer, (app::DecoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B620, int32_t, get_MaxCharCount, (app::DecoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B640, bool, Equals, (app::DecoderReplacementFallback * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (app::DecoderReplacementFallback * this_ptr))
}