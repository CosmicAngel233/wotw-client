#include <interception_macros.h>

namespace app::methods::Moon::MoonGizmos {
IL2CPP_REGISTER_METHOD(0x01119BB0, void, InitializeTypeToGizmoDictionary, ());
IL2CPP_REGISTER_METHOD(0x0111A180, void, OnSceneGUI, (app::MoonGizmos * this_ptr));
IL2CPP_REGISTER_METHOD(0x0111A490, void, ClearDrawingReferences, (app::MoonGizmos * this_ptr));
IL2CPP_REGISTER_METHOD(0x0111A580, List_1_Moon_IGizmo_ *, GetGizmosForComponent, (app::MoonGizmos * this_ptr, app::Component_1 * component));
IL2CPP_REGISTER_METHOD(0x0111ADD0, void, __ctor, (app::MoonGizmos * this_ptr));
IL2CPP_REGISTER_METHOD(0x0111AF50, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01EB9030, List_1_System_Object_ *, GetGizmosOfType, (app::MoonGizmos * this_ptr));
}
