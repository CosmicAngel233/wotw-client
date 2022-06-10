#include <interception_macros.h>

namespace app::methods::EntityBehaviourCageMetaData {
    IL2CPP_REGISTER_METHOD(0x00C8C800, void, OnEnable, (app::EntityBehaviourCageMetaData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C8C9B0, void, OnDisable, (app::EntityBehaviourCageMetaData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C8CB60, void, FaceAdded, (app::EntityBehaviourCageMetaData * this_ptr, app::CageStructureTool_Face * face));
    IL2CPP_REGISTER_METHODINFO(0x0471D578, EntityBehaviourCageMetaData_FaceAdded__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00C8CCA0, void, __ctor, (app::EntityBehaviourCageMetaData * this_ptr));
}