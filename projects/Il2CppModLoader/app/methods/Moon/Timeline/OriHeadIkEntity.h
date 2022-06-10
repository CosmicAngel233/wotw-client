#include <interception_macros.h>

namespace app::methods::Moon::Timeline::OriHeadIkEntity {
    IL2CPP_REGISTER_METHOD(0x00777870, app::Transform *, get_ResolvedLookTarget, (app::OriHeadIkEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00777970, app::OriHeadIk *, get_OriHeadIk, (app::OriHeadIkEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00777A20, void, OnStartPlayback, (app::OriHeadIkEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00777A30, void, OnUpdateEntity, (app::OriHeadIkEntity * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00777D50, void, ctor, (app::OriHeadIkEntity * this_ptr))
}