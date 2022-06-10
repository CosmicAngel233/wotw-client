#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaElementDecl {
    IL2CPP_REGISTER_METHOD(0x01AAE900, void, __ctor_1, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AAEB70, void, __ctor_2, (app::SchemaElementDecl * this_ptr, app::XmlSchemaDatatype * dtype));
    IL2CPP_REGISTER_METHOD(0x01AAEE30, void, __ctor_3, (app::SchemaElementDecl * this_ptr, app::XmlQualifiedName * name, app::String * prefix));
    IL2CPP_REGISTER_METHOD(0x01AAF0C0, app::SchemaElementDecl *, CreateAnyTypeElementDecl, ());
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, IDtdAttributeListInfo_get_HasNonCDataAttributes, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AAF240, app::IDtdAttributeInfo *, IDtdAttributeListInfo_LookupAttribute, (app::SchemaElementDecl * this_ptr, app::String * prefix, app::String * local_name));
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IEnumerable_1_System_Xml_IDtdDefaultAttributeInfo_ *, IDtdAttributeListInfo_LookupDefaultAttributes, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsIdDeclared, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsIdDeclared, (app::SchemaElementDecl * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_HasNonCDataAttribute, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_HasNonCDataAttribute, (app::SchemaElementDecl * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01AAF410, app::SchemaElementDecl *, Clone, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E24C90, bool, get_IsAbstract, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E24CA0, void, set_IsAbstract, (app::SchemaElementDecl * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01AAF540, bool, get_IsNillable, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AAF550, void, set_IsNillable, (app::SchemaElementDecl * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x003FC380, app::XmlSchemaDerivationMethod__Enum, get_Block, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_Block, (app::SchemaElementDecl * this_ptr, app::XmlSchemaDerivationMethod__Enum value));
    IL2CPP_REGISTER_METHOD(0x0108CEB0, bool, get_IsNotationDeclared, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0108CEC0, void, set_IsNotationDeclared, (app::SchemaElementDecl * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01AAF560, bool, get_HasDefaultAttribute, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_HasRequiredAttribute, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::ContentValidator *, get_ContentValidator, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ContentValidator, (app::SchemaElementDecl * this_ptr, app::ContentValidator * value));
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::XmlSchemaAnyAttribute *, get_AnyAttribute, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_AnyAttribute, (app::SchemaElementDecl * this_ptr, app::XmlSchemaAnyAttribute * value));
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::CompiledIdentityConstraint__Array *, get_Constraints, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Constraints, (app::SchemaElementDecl * this_ptr, app::CompiledIdentityConstraint__Array * value));
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::XmlSchemaElement *, get_SchemaElement, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_SchemaElement, (app::SchemaElementDecl * this_ptr, app::XmlSchemaElement * value));
    IL2CPP_REGISTER_METHOD(0x01AAF570, void, AddAttDef, (app::SchemaElementDecl * this_ptr, app::SchemaAttDef * attdef));
    IL2CPP_REGISTER_METHOD(0x01AAF760, app::SchemaAttDef *, GetAttDef, (app::SchemaElementDecl * this_ptr, app::XmlQualifiedName * qname));
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IList_1_System_Xml_IDtdDefaultAttributeInfo_ *, get_DefaultAttDefs, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ *, get_AttDefs, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ *, get_ProhibitedAttributes, (app::SchemaElementDecl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AAF860, void, CheckAttributes, (app::SchemaElementDecl * this_ptr, app::Hashtable * presence, bool standalone));
    IL2CPP_REGISTER_METHODINFO(0x047859D8, SchemaElementDecl_CheckAttributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01AAFAF0, void, __cctor, ());
}