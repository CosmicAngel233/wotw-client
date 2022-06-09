#include <interception_macros.h>

namespace app::methods::Moon::SerializedBooleanUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B652C0, UberID *, get_GroupID, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B653B0, bool, get_Value, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65500, void, set_Value, (app::SerializedBooleanUberState * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DefaultBooleanValue, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultBooleanValue, (app::SerializedBooleanUberState * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x01B655D0, float, get_GenericValue, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B655F0, void, set_GenericValue, (app::SerializedBooleanUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (app::SerializedBooleanUberState * this_ptr, app::Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Boolean___Array *, get_Options, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B656B0, void, Save, (app::SerializedBooleanUberState * this_ptr, app::UberStateArchive * archive, app::Object * state));
IL2CPP_REGISTER_METHOD(0x01B65770, Object *, Load, (app::SerializedBooleanUberState * this_ptr, app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x01B65780, Object *, Read, (app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x00420230, UberStateHeader_UberStateType__Enum, get_Type, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B65820, Object *, CreateDefaultUberState, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B658B0, String *, ToString, (app::SerializedBooleanUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (app::SerializedBooleanUberState * this_ptr));
}
