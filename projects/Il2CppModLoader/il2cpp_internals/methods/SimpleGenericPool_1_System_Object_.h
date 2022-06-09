#include <interception_macros.h>

namespace app::methods::SimpleGenericPool_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x01D17E40, void, __ctor, (app::SimpleGenericPool_1_System_Object_ * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x01D17FB0, SimpleGenericPool_1_T_PoolItem_System_Object_, GetInstance, (app::SimpleGenericPool_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D181A0, void, Destroy, (app::SimpleGenericPool_1_System_Object_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_System_Object_ pool_item));
IL2CPP_REGISTER_METHOD(0x01D18270, SimpleGenericPool_1_T_PoolItem_System_Object_, AddNewToPool, (app::SimpleGenericPool_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D18320, void, TakeFromPool, (app::SimpleGenericPool_1_System_Object_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_System_Object_ * item, int32_t index));
}
