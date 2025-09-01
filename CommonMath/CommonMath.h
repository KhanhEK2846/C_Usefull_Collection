#include <stdint.h>
#include <rpcndr.h>

/*---------------------------Defien Range------------------------*/
#define MinU8           ((uint8_t)0x00)
#define MaxU8           ((uint8_t)0xFF)
#define MinS8           ((int8_t)-128)
#define MaxS8           ((int8_t)127)

#define MinU16           ((uint16_t)0x0000)
#define MaxU16           ((uint16_t)0xFFFF)
#define MinS16           ((int16_t)-32768)
#define MaxS16           ((int16_t)32767)

#define MinU32           ((uint32_t)0x00000000)
#define MaxU32           ((uint32_t)0xFFFFFFFF)
#define MinS32           ((int32_t)-2147483648)
#define MaxS32           ((int32_t)2147483647)

#define MinU64           ((uint64_t)0x0000000000000000)
#define MaxU64           ((uint64_t)0xFFFFFFFFFFFFFFFF)
#define MinS64           ((int64_t)-9223372036854775807)
#define MaxS64           ((int64_t)9223372036854775807)

/*---------------------------Get Min------------------------*/
inline uint8_t GetMinU8(const uint8_t FirstValue, const uint8_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline uint16_t GetMinU16(const uint16_t FirstValue, const uint16_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline uint32_t GetMinU32(const uint32_t FirstValue, const uint32_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline uint64_t GetMinU64(const uint64_t FirstValue, const uint64_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline int8_t GetMinS8(const int8_t FirstValue, const int8_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline int16_t GetMinS16(const int16_t FirstValue, const int16_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline int32_t GetMinS32(const int32_t FirstValue, const int32_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}
inline int64_t GetMinS64(const int64_t FirstValue, const int64_t SecondValue) {
    return (FirstValue <= SecondValue) ? FirstValue : SecondValue;
}

/*---------------------------Get MFirstValuex------------------------*/
inline uint8_t GetMFirstValuexU8(const uint8_t FirstValue, const uint8_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline uint16_t GetMFirstValuexU16(const uint16_t FirstValue, const uint16_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline uint32_t GetMFirstValuexU32(const uint32_t FirstValue, const uint32_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline uint64_t GetMFirstValuexU64(const uint64_t FirstValue, const uint64_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline int8_t GetMFirstValuexS8(const int8_t FirstValue, const int8_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline int16_t GetMFirstValuexS16(const int16_t FirstValue, const int16_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline int32_t GetMFirstValuexS32(const int32_t FirstValue, const int32_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}
inline int64_t GetMFirstValuexS64(const int64_t FirstValue, const int64_t SecondValue) {
    return (FirstValue >= SecondValue) ? FirstValue : SecondValue;
}

/*---------------------------Is Odd------------------------*/
inline boolean IsOddU8(const uint8_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddU16(const uint16_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddU32(const uint32_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddU64(const uint64_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddS8(const int8_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddS16(const int16_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddS32(const int32_t Value) {
    return (Value & 1) != 0;
}
inline boolean IsOddS64(const int64_t Value) {
    return (Value & 1) != 0;
}

/*---------------------------Is Even------------------------*/
inline boolean IsEvenU8(const uint8_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenU16(const uint16_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenU32(const uint32_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenU64(const uint64_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenS8(const int8_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenS16(const int16_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenS32(const int32_t Value) {
    return (Value & 1) == 0;
}
inline boolean IsEvenS64(const int64_t Value) {
    return (Value & 1) == 0;
}

/*---------------------------Abs------------------------*/
inline int8_t AbsS8(const int8_t Value) {
    return (Value < 0) ? ((Value == MinS8)? MaxS8 : -Value) : Value;
}
inline int16_t AbsS16(const int16_t Value) {
    return (Value < 0) ? ((Value == MinS16)? MaxS16 : -Value) : Value;
}
inline int32_t AbsS32(const int32_t Value) {
    return (Value < 0) ? ((Value == MinS32)? MaxS32 : -Value) : Value;
}
inline int64_t AbsS64(const int64_t Value) {
    return (Value < 0) ? ((Value == MinS64)? MaxS64 : -Value) : Value;
}

/*------------------------Increasement------------------------*/
inline uint8_t IncreaseU8(const uint8_t Value) {
    return (Value >= MaxU8) ? Value : (Value + 1u);
}
inline uint16_t IncreaseU16(const uint16_t Value) {
    return (Value >= MaxU16) ? Value : (Value + 1u);
}
inline uint32_t IncreaseU32(const uint32_t Value) {
    return (Value >= MaxU32) ? Value : (Value + 1u);
}
inline uint64_t IncreaseU64(const uint64_t Value) {
    return (Value >= MaxU64) ? Value : (Value + 1u);
}
inline int8_t IncreaseS8(const int8_t Value) {
    return (Value >= MaxS8) ? Value : (Value + 1);
}
inline int16_t IncreaseS16(const int16_t Value) {
    return (Value >= MaxS16) ? Value : (Value + 1);
}
inline int32_t IncreaseS32(const int32_t Value) {
    return (Value >= MaxS32) ? Value : (Value + 1);
}
inline int64_t IncreaseS64(const int64_t Value) {
    return (Value >= MaxS64) ? Value : (Value + 1);
}

/*------------------------Increasement with limit------------------------*/
inline uint8_t IncreaseU8WithLimit(const uint8_t Value, const uint8_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1u);
}
inline uint16_t IncreaseU16WithLimit(const uint16_t Value, const uint16_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1u);
}
inline uint32_t IncreaseU32WithLimit(const uint32_t Value, const uint32_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1u);
}
inline uint64_t IncreaseU64WithLimit(const uint64_t Value, const uint64_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1u);
}
inline int8_t IncreaseS8WithLimit(const int8_t Value, const int8_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1);
}
inline int16_t IncreaseS16WithLimit(const int16_t Value, const int16_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1);
}
inline int32_t IncreaseS32WithLimit(const int32_t Value, const int32_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1);
}
inline int64_t IncreaseS64WithLimit(const int64_t Value, const int64_t Limit) {
    return (Value >= Limit) ? Value : (Value + 1);
}

/*------------------------Decreasement------------------------*/
inline uint8_t DecreaseU8(const uint8_t Value) {
    return (Value <= MinU8) ? Value : (Value - 1u);
}
inline uint16_t DecreaseU16(const uint16_t Value) {
    return (Value <= MinU16) ? Value : (Value - 1u);
}
inline uint32_t DecreaseU32(const uint32_t Value) {
    return (Value <= MinU32) ? Value : (Value - 1u);
}
inline uint64_t DecreaseU64(const uint64_t Value) {
    return (Value <= MinU64) ? Value : (Value - 1u);
}
inline int8_t DecreaseS8(const int8_t Value) {
    return (Value <= MinS8) ? Value : (Value - 1);
}
inline int16_t DecreaseS16(const int16_t Value) {
    return (Value <= MinS16) ? Value : (Value - 1);
}
inline int32_t DecreaseS32(const int32_t Value) {
    return (Value <= MinS32) ? Value : (Value - 1);
}
inline int64_t DecreaseS64(const int64_t Value) {
    return (Value <= MinS64) ? Value : (Value - 1);
}

/*------------------------Decreasement with limit------------------------*/
inline uint8_t DecreaseU8WithLimit(const uint8_t Value, const uint8_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1u);
}
inline uint16_t DecreaseU16WithLimit(const uint16_t Value, const uint16_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1u);
}
inline uint32_t DecreaseU32WithLimit(const uint32_t Value, const uint32_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1u);
}
inline uint64_t DecreaseU64WithLimit(const uint64_t Value, const uint64_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1u);
}
inline int8_t DecreaseS8WithLimit(const int8_t Value, const int8_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1);
}
inline int16_t DecreaseS16WithLimit(const int16_t Value, const int16_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1);
}
inline int32_t DecreaseS32WithLimit(const int32_t Value, const int32_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1);
}
inline int64_t DecreaseS64WithLimit(const int64_t Value, const int64_t Limit) {
    return (Value <= Limit) ? Value : (Value - 1);
}
