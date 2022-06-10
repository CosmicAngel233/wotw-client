#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::JsonReader {
    IL2CPP_REGISTER_METHOD(0x00529E80, app::JsonReader_State__Enum, get_CurrentState, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_CloseInput, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_CloseInput, (app::JsonReader * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_SupportMultipleContent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_SupportMultipleContent, (app::JsonReader * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::DateTimeZoneHandling__Enum, get_DateTimeZoneHandling, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66750, void, set_DateTimeZoneHandling, (app::JsonReader * this_ptr, app::DateTimeZoneHandling__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0475DBA0, JsonReader_set_DateTimeZoneHandling__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C6660, app::DateParseHandling__Enum, get_DateParseHandling, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66810, void, set_DateParseHandling, (app::JsonReader * this_ptr, app::DateParseHandling__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0478FC68, JsonReader_set_DateParseHandling__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::FloatParseHandling__Enum, get_FloatParseHandling, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A668D0, void, set_FloatParseHandling, (app::JsonReader * this_ptr, app::FloatParseHandling__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0477AD10, JsonReader_set_FloatParseHandling__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String *, get_DateFormatString, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_DateFormatString, (app::JsonReader * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A66990, app::Nullable_1_Int32_, get_MaxDepth, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A669A0, void, set_MaxDepth, (app::JsonReader * this_ptr, app::Nullable_1_Int32_ value))
    IL2CPP_REGISTER_METHODINFO(0x04713968, JsonReader_set_MaxDepth__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::JsonToken__Enum_1, get_TokenType, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, get_Value, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66A70, app::Type *, get_ValueType, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66A90, int32_t, get_Depth, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66B40, app::String *, get_Path, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66CA0, app::CultureInfo *, get_Culture, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Culture, (app::JsonReader * this_ptr, app::CultureInfo * value))
    IL2CPP_REGISTER_METHOD(0x01A66D50, app::JsonPosition, GetPosition, (app::JsonReader * this_ptr, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x01A66E20, void, ctor, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66E40, void, Push, (app::JsonReader * this_ptr, app::JsonContainerType__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04741148, JsonReader_Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A671B0, app::JsonContainerType__Enum, Pop, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::JsonContainerType__Enum, Peek, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A67350, app::Nullable_1_Int32_, ReadAsInt32, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474ECB8, JsonReader_ReadAsInt32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A67790, app::Nullable_1_Int32_, ReadInt32String, (app::JsonReader * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x047171E8, JsonReader_ReadInt32String__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A67A80, app::String *, ReadAsString, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B1D0, JsonReader_ReadAsString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A67D10, app::Byte__Array *, ReadAsBytes, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757988, JsonReader_ReadAsBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A68230, app::Byte__Array *, ReadArrayIntoByteArray, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A68550, bool, ReadArrayElementIntoByteArrayReportDone, (app::JsonReader * this_ptr, app::List_1_System_Byte_ * buffer))
    IL2CPP_REGISTER_METHODINFO(0x047038A8, JsonReader_ReadArrayElementIntoByteArrayReportDone__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A687C0, app::Nullable_1_Double_, ReadAsDouble, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796188, JsonReader_ReadAsDouble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A68B60, app::Nullable_1_Double_, ReadDoubleString, (app::JsonReader * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x04704848, JsonReader_ReadDoubleString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A68E80, app::Nullable_1_Boolean_, ReadAsBoolean, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E280, JsonReader_ReadAsBoolean__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A69260, app::Nullable_1_Boolean_, ReadBooleanString, (app::JsonReader * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x0470C368, JsonReader_ReadBooleanString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A69560, app::Nullable_1_Decimal_, ReadAsDecimal, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473BCE0, JsonReader_ReadAsDecimal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A69980, app::Nullable_1_Decimal_, ReadDecimalString, (app::JsonReader * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x04727E08, JsonReader_ReadDecimalString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A69D80, app::Nullable_1_DateTime_, ReadAsDateTime, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737130, JsonReader_ReadAsDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6A090, app::Nullable_1_DateTime_, ReadDateTimeString, (app::JsonReader * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x04747128, JsonReader_ReadDateTimeString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6A470, app::Nullable_1_DateTimeOffset_, ReadAsDateTimeOffset, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E080, JsonReader_ReadAsDateTimeOffset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6A790, app::Nullable_1_DateTimeOffset_, ReadDateTimeOffsetString, (app::JsonReader * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x04716830, JsonReader_ReadDateTimeOffsetString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6AB90, void, ReaderReadAndAssert, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769B80, JsonReader_ReaderReadAndAssert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6AC40, app::JsonReaderException *, CreateUnexpectedEndException, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6ACD0, void, ReadIntoWrappedTypeObject, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770700, JsonReader_ReadIntoWrappedTypeObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6B020, void, Skip, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B0D0, void, SetToken_1, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 new_token))
    IL2CPP_REGISTER_METHOD(0x01A6B0F0, void, SetToken_2, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 new_token, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01A6B110, void, SetToken_3, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 new_token, app::Object * value, bool update_index))
    IL2CPP_REGISTER_METHOD(0x01A6B300, void, SetPostValueState, (app::JsonReader * this_ptr, bool update_index))
    IL2CPP_REGISTER_METHOD(0x01A6B330, void, UpdateScopeWithFinishedValue, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B340, void, ValidateEnd, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 end_token))
    IL2CPP_REGISTER_METHODINFO(0x04747CF8, JsonReader_ValidateEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6B590, void, SetStateBasedOnCurrent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709050, JsonReader_SetStateBasedOnCurrent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6B6F0, void, SetFinished, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B710, app::JsonContainerType__Enum, GetTypeForCloseToken, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 token))
    IL2CPP_REGISTER_METHODINFO(0x0475D360, JsonReader_GetTypeForCloseToken__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6B850, void, IDisposable_Dispose, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B900, void, Dispose, (app::JsonReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01A6B930, void, Close, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B950, void, ReadAndAssert, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751B08, JsonReader_ReadAndAssert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6BA00, void, ReadForTypeAndAssert, (app::JsonReader * this_ptr, app::JsonContract * contract, bool has_converter))
    IL2CPP_REGISTER_METHODINFO(0x0472A560, JsonReader_ReadForTypeAndAssert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6BAC0, bool, ReadForType, (app::JsonReader * this_ptr, app::JsonContract * contract, bool has_converter))
    IL2CPP_REGISTER_METHODINFO(0x047728C8, JsonReader_ReadForType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A6BDB0, bool, ReadAndMoveToContent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6BE10, bool, MoveToContent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6BE70, app::JsonToken__Enum_1, GetContentToken, (app::JsonReader * this_ptr))
}