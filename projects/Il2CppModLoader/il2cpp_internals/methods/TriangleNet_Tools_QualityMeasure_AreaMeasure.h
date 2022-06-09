#include <interception_macros.h>

namespace app::methods::TriangleNet_Tools::QualityMeasure_AreaMeasure {
    IL2CPP_REGISTER_METHOD(0x02A99D80, void, Reset, (app::QualityMeasure_AreaMeasure * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A99DB0, double, Measure, (app::QualityMeasure_AreaMeasure * this_ptr, app::Point * a, app::Point * b, app::Point * c));
    IL2CPP_REGISTER_METHOD(0x02A99F90, void, __ctor, (app::QualityMeasure_AreaMeasure * this_ptr));
}
