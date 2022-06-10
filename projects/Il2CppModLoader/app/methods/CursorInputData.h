#include <interception_macros.h>

namespace app::methods::CursorInputData {
    IL2CPP_REGISTER_METHOD(0x00DBAC70, void, Save, (app::CursorInputData * this_ptr, app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00DBACD0, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00DBADB0, void, Load, (app::CursorInputData * this_ptr, app::BinaryReader * binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::CursorInputData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CursorInputData * this_ptr))
}