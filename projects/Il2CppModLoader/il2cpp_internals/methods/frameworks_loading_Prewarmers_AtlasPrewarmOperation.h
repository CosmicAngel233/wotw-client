#include <interception_macros.h>

namespace app::methods::frameworks_loading_Prewarmers::AtlasPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F5D860, void, __ctor, (app::AtlasPrewarmOperation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F5D980, bool, Begin, (app::AtlasPrewarmOperation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F5DA60, bool, Update, (app::AtlasPrewarmOperation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F5DBA0, void, Unload, (app::AtlasPrewarmOperation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, (app::AtlasPrewarmOperation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::AtlasPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin));
}
