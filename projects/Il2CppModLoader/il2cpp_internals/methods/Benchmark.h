#include <interception_macros.h>

namespace app::methods::Benchmark {
    IL2CPP_REGISTER_METHOD(0x00F9DF70, void, __ctor, (app::Benchmark * this_ptr, app::String* name));
    IL2CPP_REGISTER_METHOD(0x00F9E100, void, Dispose, (app::Benchmark * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
} // namespace app::methods::Benchmark
