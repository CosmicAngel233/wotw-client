#include <interception_macros.h>

namespace app::methods::System::Text::DecoderFallback {
    IL2CPP_REGISTER_METHOD(0x02449280, app::Object *, get_InternalSyncObject, ());
    IL2CPP_REGISTER_METHOD(0x024493F0, app::DecoderFallback *, get_ReplacementFallback, ());
    IL2CPP_REGISTER_METHOD(0x024496D0, app::DecoderFallback *, get_ExceptionFallback, ());
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DecoderFallback * this_ptr));
}