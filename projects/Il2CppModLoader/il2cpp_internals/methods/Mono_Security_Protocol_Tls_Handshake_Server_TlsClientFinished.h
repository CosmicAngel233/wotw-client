#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls_Handshake_Server::TlsClientFinished {
    IL2CPP_REGISTER_METHOD(0x01F6F4B0, void, __ctor, (app::TlsClientFinished * this_ptr, app::Context_1 * context, app::Byte__Array * buffer));
    IL2CPP_REGISTER_METHOD(0x01F72980, void, ProcessAsSsl3, (app::TlsClientFinished * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04725240, TlsClientFinished_ProcessAsSsl3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F72D80, void, ProcessAsTls1, (app::TlsClientFinished * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476DB70, TlsClientFinished_ProcessAsTls1__MethodInfo);
}
