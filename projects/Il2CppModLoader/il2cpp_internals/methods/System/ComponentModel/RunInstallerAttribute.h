#include <interception_macros.h>

namespace app::methods::System::ComponentModel::RunInstallerAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, __ctor, (app::RunInstallerAttribute * this_ptr, bool run_installer));
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_RunInstaller, (app::RunInstallerAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029AC1D0, bool, Equals, (app::RunInstallerAttribute * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::RunInstallerAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029AC2D0, bool, IsDefaultAttribute, (app::RunInstallerAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029AC390, void, __cctor, ());
}