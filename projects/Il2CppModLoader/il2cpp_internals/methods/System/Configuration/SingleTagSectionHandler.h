#include <interception_macros.h>

namespace app::methods::System::Configuration::SingleTagSectionHandler {
    IL2CPP_REGISTER_METHOD(0x01FFE290, void, __ctor, (app::SingleTagSectionHandler * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04722BD0, SingleTagSectionHandler__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01FFE2C0, app::Object *, Create, (app::SingleTagSectionHandler * this_ptr, app::Object * parent, app::Object * context, app::XmlNode * section));
    IL2CPP_REGISTER_METHODINFO(0x04780BC8, SingleTagSectionHandler_Create__MethodInfo);
}
