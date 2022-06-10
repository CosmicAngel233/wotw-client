#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexCharClass {
    IL2CPP_REGISTER_METHOD(0x02588600, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x0258D500, void, __ctor_1, (app::RegexCharClass * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0258D760, void, __ctor_2, (app::RegexCharClass * this_ptr, bool negate, app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * ranges, app::StringBuilder * categories, app::RegexCharClass * subtraction));
    IL2CPP_REGISTER_METHOD(0x0258D780, bool, get_CanMerge, (app::RegexCharClass * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_Negate, (app::RegexCharClass * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0258D7A0, void, AddChar, (app::RegexCharClass * this_ptr, uint16_t c));
    IL2CPP_REGISTER_METHOD(0x0258D7B0, void, AddCharClass, (app::RegexCharClass * this_ptr, app::RegexCharClass * cc));
    IL2CPP_REGISTER_METHOD(0x0258D9C0, void, AddSet, (app::RegexCharClass * this_ptr, app::String * set));
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, AddSubtraction, (app::RegexCharClass * this_ptr, app::RegexCharClass * sub));
    IL2CPP_REGISTER_METHOD(0x0258DDB0, void, AddRange, (app::RegexCharClass * this_ptr, uint16_t first, uint16_t last));
    IL2CPP_REGISTER_METHOD(0x0258DF90, void, AddCategoryFromName, (app::RegexCharClass * this_ptr, app::String * category_name, bool invert, bool case_insensitive, app::String * pattern));
    IL2CPP_REGISTER_METHOD(0x0258E270, void, AddCategory, (app::RegexCharClass * this_ptr, app::String * category));
    IL2CPP_REGISTER_METHOD(0x0258E290, void, AddLowercase, (app::RegexCharClass * this_ptr, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHOD(0x0258E410, void, AddLowercaseRange, (app::RegexCharClass * this_ptr, uint16_t ch_min, uint16_t ch_max, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHOD(0x0258E740, void, AddWord, (app::RegexCharClass * this_ptr, bool ecma, bool negate));
    IL2CPP_REGISTER_METHOD(0x0258E8B0, void, AddSpace, (app::RegexCharClass * this_ptr, bool ecma, bool negate));
    IL2CPP_REGISTER_METHOD(0x0258EA20, void, AddDigit, (app::RegexCharClass * this_ptr, bool ecma, bool negate, app::String * pattern));
    IL2CPP_REGISTER_METHOD(0x0258EB10, uint16_t, SingletonChar, (app::String * set));
    IL2CPP_REGISTER_METHOD(0x0258EB30, bool, IsMergeable, (app::String * char_class));
    IL2CPP_REGISTER_METHOD(0x0258EC60, bool, IsEmpty, (app::String * char_class));
    IL2CPP_REGISTER_METHOD(0x0258ED50, bool, IsSingleton, (app::String * set));
    IL2CPP_REGISTER_METHOD(0x0258EEA0, bool, IsSingletonInverse, (app::String * set));
    IL2CPP_REGISTER_METHOD(0x0258EFF0, bool, IsSubtraction, (app::String * char_class));
    IL2CPP_REGISTER_METHOD(0x0258F050, bool, IsNegated, (app::String * set));
    IL2CPP_REGISTER_METHOD(0x0258F080, bool, IsECMAWordChar, (uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x0258F120, bool, IsWordChar, (uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x0258F1F0, bool, CharInClass, (uint16_t ch, app::String * set));
    IL2CPP_REGISTER_METHOD(0x0258F2A0, bool, CharInClassRecursive, (uint16_t ch, app::String * set, int32_t start));
    IL2CPP_REGISTER_METHOD(0x0258F500, bool, CharInClassInternal, (uint16_t ch, app::String * set, int32_t start, int32_t my_set_length, int32_t my_category_length));
    IL2CPP_REGISTER_METHOD(0x0258F640, bool, CharInCategory, (uint16_t ch, app::String * set, int32_t start, int32_t my_set_length, int32_t my_category_length));
    IL2CPP_REGISTER_METHOD(0x0258F820, bool, CharInCategoryGroup, (uint16_t ch, app::UnicodeCategory__Enum chcategory, app::String * category, int32_t * i));
    IL2CPP_REGISTER_METHOD(0x0258F8F0, app::String *, NegateCategory, (app::String * category));
    IL2CPP_REGISTER_METHOD(0x0258FBD0, app::RegexCharClass *, Parse, (app::String * char_class));
    IL2CPP_REGISTER_METHOD(0x0258FC70, app::RegexCharClass *, ParseRecursive, (app::String * char_class, int32_t start));
    IL2CPP_REGISTER_METHOD(0x02590230, int32_t, RangeCount, (app::RegexCharClass * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025902C0, app::String *, ToStringClass, (app::RegexCharClass * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02590710, app::RegexCharClass_SingleRange *, GetRangeAt, (app::RegexCharClass * this_ptr, int32_t i));
    IL2CPP_REGISTER_METHOD(0x025907C0, void, Canonicalize, (app::RegexCharClass * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02590BB0, app::String *, SetFromProperty, (app::String * capname, bool invert, app::String * pattern));
    IL2CPP_REGISTER_METHODINFO(0x0476A7D8, RegexCharClass_SetFromProperty__MethodInfo);
}