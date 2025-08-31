#include <stdint.h>
#include <rpcndr.h>

#define CalSizeofByteArray(length) (((length) >0u)? ((((length)-1u)/8u) +1u): 1u)

inline void SetBitInByteArray(volatile uint8_t ByteArr[], const uint32_t position) {
    if(ByteArr == NULL)
        return;

    ByteArr[position/8u] |= (uint8_t)(1u << (position % 8u));
}

inline void ClearBitInByteArray(volatile uint8_t ByteArr[], const uint32_t position) {
    if(ByteArr == NULL)
        return;

    ByteArr[position/8u] &= (uint8_t)(~((uint8_t)(1u << (position % 8u))));
}

inline boolean IsBitSetInByteArray(volatile const uint8_t ByteArr[], const uint32_t position) {
    uint8_t mask = (uint8_t)(1u << (position % 8u));

    if(ByteArr == NULL)
        return false;

    return (ByteArr[position/8u] & mask) == mask;
}

inline boolean IsBitClearInByteArray(volatile const uint8_t ByteArr[], const uint32_t position) {
    uint8_t mask = (uint8_t)(1u << (position % 8u));

    if(ByteArr == NULL)
        return false;

    return (ByteArr[position/8u] & mask) == 0;
}
