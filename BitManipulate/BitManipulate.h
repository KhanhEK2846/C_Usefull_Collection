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

/*----------------------------------Check ith bit set-------------------------------*/
inline boolean IsIthBitSetU8(const uint8_t value, const uint8_t position){
    if(position > 7) return false;
    return (value & GetSingleBitMaskU8(position));
}

inline boolean IsIthBitSetU16(const uint16_t value, const uint16_t position){
    if(position > 15) return false;
    return (value & GetSingleBitMaskU16(position));
}

inline boolean IsIthBitSetU32(const uint32_t value, const uint32_t position){
    if(position > 31) return false;
    return (value & GetSingleBitMaskU32(position));
}

inline boolean IsIthBitSetU64(const uint64_t value, const uint64_t position){
    if(position > 63) return false;
    return (value & GetSingleBitMaskU64(position));
}

/*----------------------------------Set ith bit-------------------------------*/
inline uint8_t SetIthBitU8(const uint8_t value, const uint8_t position){
    return SetBitsU8(value, GetSingleBitMaskU8(position));
}

inline uint16_t SetIthBitU16(const uint16_t value, const uint16_t position){
    return SetBitsU16(value, GetSingleBitMaskU16(position));
}

inline uint32_t SetIthBitU32(const uint32_t value, const uint32_t position){
    return SetBitsU32(value, GetSingleBitMaskU32(position));
}

inline uint64_t SetIthBitU64(const uint64_t value, const uint64_t position){
    return SetBitsU64(value, GetSingleBitMaskU64(position));
}

/*----------------------------------Clear ith bit-------------------------------*/
inline uint8_t ClearIthBitU8(const uint8_t value, const uint8_t position){
    return ClearBitsU8(value, GetSingleBitMaskU8(position));
}

inline uint16_t ClearIthBitU16(const uint16_t value, const uint16_t position){
    return ClearBitsU16(value, GetSingleBitMaskU16(position));
}

inline uint32_t ClearIthBitU32(const uint32_t value, const uint32_t position){
    return ClearBitsU32(value, GetSingleBitMaskU32(position));
}

inline uint64_t ClearIthBitU64(const uint64_t value, const uint64_t position){
    return ClearBitsU64(value, GetSingleBitMaskU64(position));
}
/*----------------------------------Toggle ith bit-------------------------------*/
inline uint8_t ToggleIthBitU8(const uint8_t value, const uint8_t position){
    return ToggleBitsU8(value, GetSingleBitMaskU8(position));
}

inline uint16_t ToggleIthBitU16(const uint16_t value, const uint16_t position){
    return ToggleBitsU16(value, GetSingleBitMaskU16(position));
}

inline uint32_t ToggleIthBitU32(const uint32_t value, const uint32_t position){
    return ToggleBitsU32(value, GetSingleBitMaskU32(position));
}

inline uint64_t ToggleIthBitU64(const uint64_t value, const uint64_t position){
    return ToggleBitsU64(value, GetSingleBitMaskU64(position));
}

/*----------------------------------Remove Right Most Bit-------------------------------*/
inline uint8_t RemoveRightMostBitU8(const uint8_t value){
    return (value & (value - 1));
}

inline uint16_t RemoveRightMostBitU16(const uint16_t value){
    return (value & (value - 1));
}

inline uint32_t RemoveRightMostBitU32(const uint32_t value){
    return (value & (value - 1));
}

inline uint64_t RemoveRightMostBitU64(const uint64_t value){
    return (value & (value - 1));
}

/*----------------------------------Is Even-------------------------------*/
inline boolean IsEvenU8(const uint8_t value){
    return (value & 1) == 0;
}

inline boolean IsEvenU16(const uint16_t value){
    return (value & 1) == 0;
}

inline boolean IsEvenU32(const uint32_t value){
    return (value & 1) == 0;
}

inline boolean IsEvenU64(const uint64_t value){
    return (value & 1) == 0;
}

/*----------------------------------Is Odd-------------------------------*/
inline boolean IsOddU8(const uint8_t value){
    return (value & 1) != 0;
}

inline boolean IsOddU16(const uint16_t value){
    return (value & 1) != 0;
}

inline boolean IsOddU32(const uint32_t value){
    return (value & 1) != 0;
}

inline boolean IsOddU64(const uint64_t value){
    return (value & 1) != 0;
}

/*----------------------------------Is Power 2-------------------------------*/
inline boolean IsPower2U8(const uint8_t value){
    return !(value & (value - 1));
}

inline boolean IsPower2U16(const uint16_t value){
    return !(value & (value - 1));
}

inline boolean IsPower2U32(const uint32_t value){
    return !(value & (value - 1));
}

inline boolean IsPower2U64(const uint64_t value){
    return !(value & (value - 1));
}

/*----------------------------------Total of set bit-------------------------------*/
inline uint8_t TotalSetBitsU8(uint8_t value){
    uint8_t count = 0;
    while(value){
        value &= (value - 1);
        count++;
    }
    return count;
}

inline uint8_t TotalSetBitsU16(uint16_t value){
    uint8_t count = 0;
    while(value){
        value &= (value - 1);
        count++;
    }
    return count;
}

inline uint8_t TotalSetBitsU32(uint32_t value){
    uint8_t count = 0;
    while(value){
        value &= (value - 1);
        count++;
    }
    return count;
}

inline uint8_t TotalSetBitsU64(uint64_t value){
    uint8_t count = 0;
    while(value){
        value &= (value - 1);
        count++;
    }
    return count;
}
