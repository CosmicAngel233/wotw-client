#pragma once
#include <interception_macros.h>

namespace app::methods::System::Data::ChildForeignKeyConstraintEnumerator {
    IL2CPP_REGISTER_METHOD(0x01E48F30, void, ctor, (app::ChildForeignKeyConstraintEnumerator * this_ptr, app::DataSet * data_set, app::DataTable * in_table))
    IL2CPP_REGISTER_METHOD(0x021516B0, bool, IsValidCandidate, (app::ChildForeignKeyConstraintEnumerator * this_ptr, app::Constraint_1 * constraint))
}
