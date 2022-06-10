#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializationWriterInterpreter {
    IL2CPP_REGISTER_METHOD(0x025BE360, void, __ctor, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlMapping * type_map));
    IL2CPP_REGISTER_METHOD(0x025BE4D0, void, InitCallbacks, (app::XmlSerializationWriterInterpreter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025BEA50, void, WriteRoot, (app::XmlSerializationWriterInterpreter * this_ptr, app::Object * ob));
    IL2CPP_REGISTER_METHODINFO(0x047566B0, XmlSerializationWriterInterpreter_WriteRoot__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025BED30, void, WriteObject, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob, app::String * element, app::String * namesp, bool is_nullable, bool need_type, bool write_wrapping_elem));
    IL2CPP_REGISTER_METHOD(0x025BF390, void, WriteMessage, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlMembersMapping * members_map, app::Object__Array * parameters));
    IL2CPP_REGISTER_METHOD(0x025BF5D0, void, WriteObjectElement, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob, app::String * element, app::String * namesp));
    IL2CPP_REGISTER_METHOD(0x025BF770, void, WriteObjectElementAttributes, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob));
    IL2CPP_REGISTER_METHOD(0x025BF880, void, WriteObjectElementElements, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob));
    IL2CPP_REGISTER_METHOD(0x025BF990, void, WriteMembers, (app::XmlSerializationWriterInterpreter * this_ptr, app::ClassMap * map, app::Object * ob, bool is_value_list));
    IL2CPP_REGISTER_METHOD(0x025BF9F0, void, WriteAttributeMembers, (app::XmlSerializationWriterInterpreter * this_ptr, app::ClassMap * map, app::Object * ob, bool is_value_list));
    IL2CPP_REGISTER_METHOD(0x025BFF50, void, WriteElementMembers, (app::XmlSerializationWriterInterpreter * this_ptr, app::ClassMap * map, app::Object * ob, bool is_value_list));
    IL2CPP_REGISTER_METHODINFO(0x047914E8, XmlSerializationWriterInterpreter_WriteElementMembers__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C03E0, app::Object *, GetMemberValue, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapMember * member, app::Object * ob, bool is_value_list));
    IL2CPP_REGISTER_METHOD(0x025C0510, bool, MemberHasValue, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapMember * member, app::Object * ob, bool is_value_list));
    IL2CPP_REGISTER_METHOD(0x025C07B0, void, WriteMemberElement, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapElementInfo * elem, app::Object * member_value));
    IL2CPP_REGISTER_METHODINFO(0x0473ECB0, XmlSerializationWriterInterpreter_WriteMemberElement__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C0D80, app::Object *, ImplicitConvert, (app::Object * obj, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x025C1120, void, WritePrimitiveValueLiteral, (app::XmlSerializationWriterInterpreter * this_ptr, app::Object * member_value, app::String * name, app::String * ns, app::XmlTypeMapping * mapped_type, app::TypeData * type_data, bool wrapped, bool is_nullable));
    IL2CPP_REGISTER_METHOD(0x025C1440, void, WritePrimitiveValueEncoded, (app::XmlSerializationWriterInterpreter * this_ptr, app::Object * member_value, app::String * name, app::String * ns, app::XmlQualifiedName * xsi_type, app::XmlTypeMapping * mapped_type, app::TypeData * type_data, bool wrapped, bool is_nullable));
    IL2CPP_REGISTER_METHOD(0x025C1780, void, WriteListElement, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob, app::String * element, app::String * namesp));
    IL2CPP_REGISTER_METHOD(0x025C1AE0, void, WriteListContent, (app::XmlSerializationWriterInterpreter * this_ptr, app::Object * container, app::TypeData * list_type, app::ListMap * map, app::Object * ob, app::StringBuilder * target_string));
    IL2CPP_REGISTER_METHODINFO(0x04712300, XmlSerializationWriterInterpreter_WriteListContent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C2200, int32_t, GetListCount, (app::XmlSerializationWriterInterpreter * this_ptr, app::TypeData * list_type, app::Object * ob));
    IL2CPP_REGISTER_METHOD(0x025C23E0, void, WriteAnyElementContent, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapMemberAnyElement * member, app::Object * member_value));
    IL2CPP_REGISTER_METHODINFO(0x047081D8, XmlSerializationWriterInterpreter_WriteAnyElementContent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C28F0, void, WritePrimitiveElement, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob, app::String * element, app::String * namesp));
    IL2CPP_REGISTER_METHOD(0x025C2950, void, WriteEnumElement, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob, app::String * element, app::String * namesp));
    IL2CPP_REGISTER_METHOD(0x025C2990, app::String *, GetStringValue, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::TypeData * type, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x025C2C50, app::String *, GetEnumXmlValue, (app::XmlSerializationWriterInterpreter * this_ptr, app::XmlTypeMapping * type_map, app::Object * ob));
}