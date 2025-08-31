#include <stdint.h>
#include <rpcndr.h>

/*-------------------------------------Get Single Bit----------------------------------*/
#define GetSingleBitMaskU8(position) ((uint8_t)1 << (position))
#define GetSingleBitMaskU16(position) ((uint16_t)1 << (position))
#define GetSingleBitMaskU32(position) ((uint32_t)1 << (position))
#define GetSingleBitMaskU64(position) ((uint64_t)1 << (position))

/*-------------------------------------Get Multiple Bits----------------------------------*/
inline uint8_t SetBitsU8(const uint8_t value, const uint8_t mask) {
    return (value | mask);
}

inline uint16_t SetBitsU16(const uint16_t value, const uint16_t mask) {
    return (value | mask);
}

inline uint32_t SetBitsU32(const uint32_t value, const uint32_t mask) {
    return (value | mask);
}

inline uint64_t SetBitsU64(const uint64_t value, const uint64_t mask) {
    return (value | mask);
}

/*-------------------------------------Clear Multiple Bits----------------------------------*/
inline uint8_t ClearBitsU8(const uint8_t value, const uint8_t mask) {
    return (value & ((uint8_t)(~mask)));
}

inline uint16_t ClearBitsU16(const uint16_t value, const uint16_t mask) {
    return (value & ((uint16_t)(~mask)));
}

inline uint32_t ClearBitsU32(const uint32_t value, const uint32_t mask) {
    return (value & ((uint32_t)(~mask)));
}

inline uint64_t ClearBitsU64(const uint64_t value, const uint64_t mask) {
    return (value & ((uint64_t)(~mask)));
}

/*-------------------------------------Toggle Multiple Bits----------------------------------*/
inline uint8_t ToggleBitsU8(const uint8_t value, const uint8_t mask) {
    return (value ^ mask);
}

inline uint16_t ToggleBitsU16(const uint16_t value, const uint16_t mask) {
    return (value ^ mask);
}

inline uint32_t ToggleBitsU32(const uint32_t value, const uint32_t mask) {
    return (value ^ mask);
}

inline uint64_t ToggleBitsU64(const uint64_t value, const uint64_t mask) {
    return (value ^ mask);
}

/*-------------------------------------Check Multiple Bits----------------------------------*/
inline boolean AreBitsSetU8(const uint8_t value, const uint8_t mask) {
    return ((value & mask) == mask);
}

inline boolean AreBitsSetU16(const uint16_t value, const uint16_t mask) {
    return ((value & mask) == mask);
}

inline boolean AreBitsSetU32(const uint32_t value, const uint32_t mask) {
    return ((value & mask) == mask);
}

inline boolean AreBitsSetU64(const uint64_t value, const uint64_t mask) {
    return ((value & mask) == mask);
}

/*-------------------------------------Check Any Bits----------------------------------*/
inline boolean AreAnyBitsSetU8(const uint8_t value, const uint8_t mask) {
    return ((value & mask) != 0);
}

inline boolean AreAnyBitsSetU16(const uint16_t value, const uint16_t mask) {
    return ((value & mask) != 0);
}

inline boolean AreAnyBitsSetU32(const uint32_t value, const uint32_t mask) {
    return ((value & mask) != 0);
}

inline boolean AreAnyBitsSetU64(const uint64_t value, const uint64_t mask) {
    return ((value & mask) != 0);
}

/*----------------------------------Check Multiple Bits Clear-------------------------------*/
inline boolean AreBitsClearU8(const uint8_t value, const uint8_t mask) {
    return ((value & mask) == 0);
}

inline boolean AreBitsClearU16(const uint16_t value, const uint16_t mask) {
    return ((value & mask) == 0);
}

inline boolean AreBitsClearU32(const uint32_t value, const uint32_t mask) {
    return ((value & mask) == 0);
}

inline boolean AreBitsClearU64(const uint64_t value, const uint64_t mask) {
    return ((value & mask) == 0);
}

/*----------------------------------Check Any Bits Clear-------------------------------*/
inline boolean AreAnyBitsClearU8(const uint8_t value, const uint8_t mask) {
    return ((value & mask) != mask);
}

inline boolean AreAnyBitsClearU16(const uint16_t value, const uint16_t mask) {
    return ((value & mask) != mask);
}

inline boolean AreAnyBitsClearU32(const uint32_t value, const uint32_t mask) {
    return ((value & mask) != mask);
}

inline boolean AreAnyBitsClearU64(const uint64_t value, const uint64_t mask) {
    return ((value & mask) != mask);
}
