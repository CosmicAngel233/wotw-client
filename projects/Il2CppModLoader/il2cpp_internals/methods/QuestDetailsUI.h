#include <interception_macros.h>

namespace app::methods::QuestDetailsUI {
    IL2CPP_REGISTER_METHOD(0x00E87460, void, SetQuest_1, (app::QuestDetailsUI * this_ptr, app::RuntimeQuest * runtime_quest));
    IL2CPP_REGISTER_METHOD(0x00E87520, void, SetQuest_2, (app::QuestDetailsUI * this_ptr, app::Quest * quest));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::QuestDetailsUI * this_ptr));
}