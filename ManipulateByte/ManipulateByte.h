#include <stdint.h>

/*---------------------------Get a Byte of 32 Bit------------------------*/
#define GetLSBByteU32(value) (((uint8_t)((uint32_t)(value) & (uint32_t)0x000000FF)))
#define Get3rdMSBByteU32(value) (((uint8_t)((uint32_t)((uint32_t)(value)>>(uint32_t)8) & (uint32_t)0x000000FF)))
#define Get2ndMSBByteU32(value) (((uint8_t)((uint32_t)((uint32_t)(value)>>(uint32_t)16) & (uint32_t)0x000000FF)))
#define GetMSBByteU32(value) (((uint8_t)((uint32_t)((uint32_t)(value)>>(uint32_t)24))))

/*---------------------------Get a Byte of 16 Bit------------------------*/
#define GetLSBByteU16(value) (((uint8_t)((uint16_t)(value) & (uint16_t)0x00FF)))
#define GetMSBByteU16(value) (((uint8_t)((uint16_t)(value)>>(uint16_t)8)))

/*---------------------------Get a Byte of 64 Bit------------------------*/
#define GetLSBByteU64(value) (((uint8_t)((uint64_t)(value) & (uint64_t)0x00000000000000FF)))
#define Get2ndLSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)8) & (uint64_t)0x00000000000000FF)))
#define Get3rdLSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)16) & (uint64_t)0x00000000000000FF)))
#define Get4thLSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)24) & (uint64_t)0x00000000000000FF)))
#define Get4thMSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)32) & (uint64_t)0x00000000000000FF)))
#define Get3rdMSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)40) & (uint64_t)0x00000000000000FF)))
#define Get2ndMSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)48) & (uint64_t)0x00000000000000FF)))
#define GetMSBByteU64(value) (((uint8_t)((uint64_t)((uint64_t)(value)>>(uint64_t)56))))

/*---------------------------Get Half Byte of 8 Bit------------------------*/
#define GetLSBHalfByteU8(value) (((uint8_t)((uint8_t)(value) & (uint8_t)0x0F)))
#define GetMSBHalfByteU8(value) ((((uint8_t)((uint8_t)(value)>>(uint8_t)4) & (uint8_t)0x0F)))

/*--------------------------Convert BCD and Ascii------------------------*/
#define BCD2ASCII(value) (uint8_t)((value) + 0x30u)
#define ASCII2BCD(value) (uint8_t)((value) - 0x30u)

/*---------------------------Combine Half Byte for 8 Bit------------------------*/
#define CombineHalfByteU8(MSBHalfByte, LSBHalfByte) (uint8_t)((((uint8_t)(MSBHalfByte) & (uint8_t)0x0F) << (uint8_t)4) | ((uint8_t)(LSBHalfByte) & (uint8_t)0x0F))

/*---------------------------Combine Byte for 16 Bit------------------------*/
#define CombineByteU16(MSBByte, LSBByte) (uint16_t)((((uint16_t)(MSBByte) & (uint16_t)0xFF) << (uint16_t)8) | ((uint16_t)(LSBByte) & (uint16_t)0xFF))

/*---------------------------Combine Byte for 32 Bit------------------------*/
#define CombineByteU32(MSBByte, SecondMSB, ThirdMSB, LSBByte) (uint32_t)((((uint32_t)(MSBByte) & (uint32_t)0xFF) << (uint32_t)24) | (((uint32_t)(SecondMSB) & (uint32_t)0xFF) << (uint32_t)16) | (((uint32_t)(ThirdMSB) & (uint32_t)0xFF) << (uint32_t)8) | ((uint32_t)(LSBByte) & (uint32_t)0xFF))

/*---------------------------Combine Byte for 64 Bit------------------------*/
#define CombineByteU64(MSBByte, SecondMSB, ThirdMSB, FourthMSB, FourthLSB, ThirdLSB, SecondLSB, LSBByte) (uint64_t)((((uint64_t)(MSBByte) & (uint64_t)0xFF) << (uint64_t)56) | (((uint64_t)(SecondMSB) & (uint64_t)0xFF) << (uint64_t)48) | (((uint64_t)(ThirdMSB) & (uint64_t)0xFF) << (uint64_t)40) | (((uint64_t)(FourthMSB) & (uint64_t)0xFF) << (uint64_t)32) \
                                                                                                                | (((uint64_t)(FourthLSB) & (uint64_t)0xFF) << (uint64_t)24) | (((uint64_t)(ThirdLSB) & (uint64_t)0xFF) << (uint64_t)16) | (((uint64_t)(SecondLSB) & (uint64_t)0xFF) << (uint64_t)8) | ((uint64_t)(LSBByte) & (uint64_t)0xFF))
