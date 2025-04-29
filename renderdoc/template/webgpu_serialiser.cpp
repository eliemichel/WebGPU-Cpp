#include "webgpu_serialiser.h"

// Descriptors & Structs
{{descriptors}}

// Enums
{{enumerations}}

// Object handles
template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUInstance &el)
{
  SERIALISE_ELEMENT(el);
}

INSTANTIATE_SERIALISE_TYPE(WGPUInstance);
