#include <interception_macros.h>

namespace app::methods::TriangleNet_Tools::TriangleQuadTree {
IL2CPP_REGISTER_METHOD(0x02A9BFD0, void, __ctor, (app::TriangleQuadTree * this_ptr, app::Mesh_1 * mesh, int32_t max_depth, int32_t size_bound));
IL2CPP_REGISTER_METHOD(0x02A9C180, ITriangle *, Query, (app::TriangleQuadTree * this_ptr, double x, double y));
IL2CPP_REGISTER_METHOD(0x02A9C540, bool, IsPointInTriangle, (app::Point * p, app::Point * t0, app::Point * t1, app::Point * t2));
IL2CPP_REGISTER_METHOD(0x0261CAB0, double, DotProduct, (app::Point * p, app::Point * q));
}
