#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::KeyedHashAlgorithm {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::KeyedHashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DBF60, void, Dispose, (app::KeyedHashAlgorithm * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x020DBFC0, app::Byte__Array *, get_Key, (app::KeyedHashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DC100, void, set_Key, (app::KeyedHashAlgorithm * this_ptr, app::Byte__Array * value))
    IL2CPP_REGISTER_METHODINFO(0x04716BE0, KeyedHashAlgorithm_set_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DC2A0, app::KeyedHashAlgorithm *, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020DC3E0, app::KeyedHashAlgorithm *, Create_2, (app::String * alg_name))
}