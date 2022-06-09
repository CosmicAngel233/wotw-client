#include <interception_macros.h>

namespace app::methods::TriangleNet_Meshing_Algorithm::Dwyer {
    IL2CPP_REGISTER_METHOD(0x026321A0, app::IMesh *, Triangulate, (app::Dwyer * this_ptr, app::IList_1_TriangleNet_Geometry_Vertex_ * points, app::Configuration_1 * config));
    IL2CPP_REGISTER_METHOD(0x02632890, void, MergeHulls, (app::Dwyer * this_ptr, app::Otri * farleft, app::Otri * innerleft, app::Otri * innerright, app::Otri * farright, int32_t axis));
    IL2CPP_REGISTER_METHOD(0x02634A60, void, DivconqRecurse, (app::Dwyer * this_ptr, int32_t left, int32_t right, int32_t axis, app::Otri * farleft, app::Otri * farright));
    IL2CPP_REGISTER_METHOD(0x026355A0, int32_t, RemoveGhosts, (app::Dwyer * this_ptr, app::Otri * startghost));
    IL2CPP_REGISTER_METHOD(0x0049C100, void, __ctor, (app::Dwyer * this_ptr));
}
