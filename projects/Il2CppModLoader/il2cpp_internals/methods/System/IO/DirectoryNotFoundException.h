#include <interception_macros.h>

namespace app::methods::System::IO::DirectoryNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01E05080, void, __ctor_1, (app::DirectoryNotFoundException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E05110, void, __ctor_2, (app::DirectoryNotFoundException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_3, (app::DirectoryNotFoundException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
