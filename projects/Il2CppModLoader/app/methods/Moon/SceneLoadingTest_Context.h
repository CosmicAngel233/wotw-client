#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::SceneLoadingTest_Context {
    IL2CPP_REGISTER_METHOD(0x00ECB200, void, ctor, (app::SceneLoadingTest_Context * this_ptr, app::IProfilingDataProvider * data_provider, app::CsvWriter * writer, app::List_1_System_ValueTuple_2__2 * pending_scenes))
    IL2CPP_REGISTER_METHOD(0x00ECB360, void, Dispose, (app::SceneLoadingTest_Context * this_ptr))
}
