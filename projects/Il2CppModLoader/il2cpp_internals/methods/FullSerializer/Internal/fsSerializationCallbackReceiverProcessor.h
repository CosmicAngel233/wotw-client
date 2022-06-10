#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsSerializationCallbackReceiverProcessor {
    IL2CPP_REGISTER_METHOD(0x0165D980, bool, CanProcess, (app::fsSerializationCallbackReceiverProcessor * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x0165DA50, void, OnBeforeSerialize, (app::fsSerializationCallbackReceiverProcessor * this_ptr, app::Type * storage_type, app::Object * instance));
    IL2CPP_REGISTER_METHOD(0x0165DB30, void, OnAfterDeserialize, (app::fsSerializationCallbackReceiverProcessor * this_ptr, app::Type * storage_type, app::Object * instance));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::fsSerializationCallbackReceiverProcessor * this_ptr));
}