#include <interception_macros.h>

namespace app::methods::Moon::Wwise::SceneSoundBankData {
    IL2CPP_REGISTER_METHOD(0x0270ADE0, void, Load, (app::SceneSoundBankData * this_ptr, bool async, app::HashSet_1_System_UInt32_ * filter, bool exclude_filtered))
    IL2CPP_REGISTER_METHOD(0x0270AFF0, void, Unload, (app::SceneSoundBankData * this_ptr, app::HashSet_1_System_UInt32_ * filter, bool exclude_filtered))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneSoundBankData * this_ptr))
}