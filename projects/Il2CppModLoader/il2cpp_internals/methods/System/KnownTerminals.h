#include <interception_macros.h>

namespace app::methods::System::KnownTerminals {
    IL2CPP_REGISTER_METHOD(0x02266240, app::Byte__Array *, get_linux, ());
    IL2CPP_REGISTER_METHOD(0x022662E0, app::Byte__Array *, get_xterm, ());
    IL2CPP_REGISTER_METHOD(0x02266380, app::Byte__Array *, get_ansi, ());
}