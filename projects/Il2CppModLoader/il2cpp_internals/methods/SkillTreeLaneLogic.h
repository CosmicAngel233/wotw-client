#include <interception_macros.h>

namespace app::methods::SkillTreeLaneLogic {
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Index, (app::SkillTreeLaneLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B5660, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x006B5700, void, OnEnable, (app::SkillTreeLaneLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B5850, void, FixedUpdate, (app::SkillTreeLaneLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B5860, void, UpdateItems, (app::SkillTreeLaneLogic * this_ptr, bool instant));
    IL2CPP_REGISTER_METHOD(0x006B5AB0, bool, get_HasAllSkills, (app::SkillTreeLaneLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B5B90, void, Serialize, (app::SkillTreeLaneLogic * this_ptr, app::Archive * ar));
    IL2CPP_REGISTER_METHOD(0x006B5BC0, void, __ctor, (app::SkillTreeLaneLogic * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006B5D20, void, __cctor, ());
}