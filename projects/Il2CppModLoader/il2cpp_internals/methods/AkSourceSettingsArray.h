#include <interception_macros.h>

namespace app::methods::AkSourceSettingsArray {
IL2CPP_REGISTER_METHOD(0x026FAA50, void, __ctor, (app::AkSourceSettingsArray * this_ptr, int32_t count));
IL2CPP_REGISTER_METHOD(0x026FAAE0, int32_t, get_StructureSize, (app::AkSourceSettingsArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x026FAB70, void, DefaultConstructAtIntPtr, (app::AkSourceSettingsArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x026FAC10, AkSourceSettings *, CreateNewReferenceFromIntPtr, (app::AkSourceSettingsArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x026FAD60, void, CloneIntoReferenceFromIntPtr, (app::AkSourceSettingsArray * this_ptr, app::void * address, app::AkSourceSettings * other));
}
