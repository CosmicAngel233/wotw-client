#include <interception_macros.h>

namespace app::methods::DynamicInstantiationDescriptor_CountGetter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::MonoBehaviour * component, int32_t array_index, app::GameObject * go));
IL2CPP_REGISTER_METHOD(0x030E0580, IAsyncResult *, BeginInvoke, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::MonoBehaviour * component, int32_t array_index, app::GameObject * go, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::DynamicInstantiationDescriptor_CountGetter * this_ptr, app::IAsyncResult * result));
}
