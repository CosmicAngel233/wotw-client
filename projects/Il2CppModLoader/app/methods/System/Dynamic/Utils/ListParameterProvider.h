#include <interception_macros.h>

namespace app::methods::System::Dynamic::Utils::ListParameterProvider {
    IL2CPP_REGISTER_METHOD(0x01F95C40, void, ctor, (app::ListParameterProvider * this_ptr, app::IParameterProvider * provider, app::ParameterExpression * arg0))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ParameterExpression *, get_First, (app::ListParameterProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F95CE0, int32_t, get_ElementCount, (app::ListParameterProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F95D70, app::ParameterExpression *, GetElement, (app::ListParameterProvider * this_ptr, int32_t index))
}