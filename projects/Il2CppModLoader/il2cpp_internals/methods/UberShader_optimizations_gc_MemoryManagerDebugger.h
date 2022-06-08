#include <interception_macros.h>

namespace app::methods::UberShader::optimizations::gc::MemoryManagerDebugger {
IL2CPP_REGISTER_METHOD(0x018FFBA0, MemoryManagerDebugger_MemoryManagerDataCache *, get_LastKnownInfo, ());
IL2CPP_REGISTER_METHOD(0x018FFC40, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x018FFCE0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x018FFE00, void, Update, ());
IL2CPP_REGISTER_METHOD(0x018FFFF0, void, InitLocalCache, ());
IL2CPP_REGISTER_METHOD(0x01900670, void, UpdateCache, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MemoryManagerDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01900B60, void, __cctor, ());
}
