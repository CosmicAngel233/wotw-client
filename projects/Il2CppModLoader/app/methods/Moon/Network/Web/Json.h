#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::Json {
    IL2CPP_REGISTER_METHOD(0x02E92E60, app::Object *, Deserialize, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x02E92E70, app::String *, Serialize, (app::Object * obj))
}