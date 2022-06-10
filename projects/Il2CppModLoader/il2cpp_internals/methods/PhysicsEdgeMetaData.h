#include <interception_macros.h>

namespace app::methods::PhysicsEdgeMetaData {
    IL2CPP_REGISTER_METHOD(0x014FEE30, void, OnAddEdge, (app::PhysicsEdgeMetaData * this_ptr, app::CageStructureTool_Edge * edge));
    IL2CPP_REGISTER_METHOD(0x014FEFA0, void, OnMergeEdge, (app::PhysicsEdgeMetaData * this_ptr, app::CageStructureTool_Edge * edge_a, app::CageStructureTool_Edge * edge_b, app::CageStructureTool_Edge * new_edge));
    IL2CPP_REGISTER_METHOD(0x014FF260, void, OnSplitEdge, (app::PhysicsEdgeMetaData * this_ptr, app::CageStructureTool_Edge * edge, app::CageStructureTool_Edge * new_edge_a, app::CageStructureTool_Edge * new_edge_b));
    IL2CPP_REGISTER_METHOD(0x014FF530, void, __ctor, (app::PhysicsEdgeMetaData * this_ptr));
}