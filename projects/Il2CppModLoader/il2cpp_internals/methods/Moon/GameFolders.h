#include <interception_macros.h>

namespace app::methods::Moon::GameFolders {
    IL2CPP_REGISTER_METHOD(0x0255A0C0, app::String *, get_PlayerDataFolderPath, ());
    IL2CPP_REGISTER_METHOD(0x0255A2D0, app::String *, get_PlayerTrialDataFolderPath, ());
    IL2CPP_REGISTER_METHOD(0x0255A4F0, void, __cctor, ());
}