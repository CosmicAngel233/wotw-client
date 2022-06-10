#include <interception_macros.h>

namespace app::methods::System::Text::EncoderReplacementFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x0244EE60, void, ctor, (app::EncoderReplacementFallbackBuffer * this_ptr, app::EncoderReplacementFallback * fallback))
    IL2CPP_REGISTER_METHOD(0x0244EEA0, bool, Fallback_1, (app::EncoderReplacementFallbackBuffer * this_ptr, uint16_t char_unknown, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0244F060, bool, Fallback_2, (app::EncoderReplacementFallbackBuffer * this_ptr, uint16_t char_unknown_high, uint16_t char_unknown_low, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04713E40, EncoderReplacementFallbackBuffer_Fallback_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0244F370, uint16_t, GetNextChar, (app::EncoderReplacementFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F3C0, bool, MovePrevious, (app::EncoderReplacementFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F3E0, int32_t, get_Remaining, (app::EncoderReplacementFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244F3F0, void, Reset, (app::EncoderReplacementFallbackBuffer * this_ptr))
}