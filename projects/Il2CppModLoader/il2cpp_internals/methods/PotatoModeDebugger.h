#include <interception_macros.h>

namespace app::methods::PotatoModeDebugger {
IL2CPP_REGISTER_METHOD(0x00C6A910, String *, get_Label, (app::PotatoModeDebugger * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C6A990, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00C6AA10, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00C6ABD0, void, OnEnable, ());
IL2CPP_REGISTER_METHOD(0x00C6B090, void, OnDisable, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::PotatoModeDebugger * this_ptr));
}
