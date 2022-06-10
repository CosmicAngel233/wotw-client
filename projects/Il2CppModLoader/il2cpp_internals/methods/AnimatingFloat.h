#include <interception_macros.h>

namespace app::methods::AnimatingFloat {
    IL2CPP_REGISTER_METHOD(0x004FBCF0, bool, Update, (app::AnimatingFloat * this_ptr, float dt));
    IL2CPP_REGISTER_METHOD(0x004FBD80, bool, get_IsValueAtStart, (app::AnimatingFloat * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004FBDA0, bool, get_IsValueAtEnd, (app::AnimatingFloat * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004FBDC0, void, Serialize, (app::AnimatingFloat * this_ptr, app::Archive * ar));
    IL2CPP_REGISTER_METHOD(0x004FBE40, void, __ctor, (app::AnimatingFloat * this_ptr));
}