#include <interception_macros.h>

namespace app::methods::TentacleTest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::TentacleTest * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010D7670, void, Update, (app::TentacleTest * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010D7860, TentacleTest_Segment*, get_LastSegment, (app::TentacleTest * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010D7900, void, FixedUpdate, (app::TentacleTest * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010D8470, void, __ctor, (app::TentacleTest * this_ptr));
} // namespace app::methods::TentacleTest
