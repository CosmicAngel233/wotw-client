#include <interception_macros.h>

namespace app::methods::LocalSpacePointSet {
IL2CPP_REGISTER_METHOD(0x00FC0D50, List_1_UnityEngine_Vector3_ *, get_WorldSpaceWorldSpaceInteractionPoints, (app::LocalSpacePointSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FC0D80, void, set_WorldSpaceWorldSpaceInteractionPoints, (app::LocalSpacePointSet * this_ptr, app::List_1_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x00DA18C0, void, MarkDirty, (app::LocalSpacePointSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FC1070, void, UpdateWorldSpacePointCache, (app::LocalSpacePointSet * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FC1550, void, __ctor, (app::LocalSpacePointSet * this_ptr));
}
