#include <stdio.h>
#include <stdlib.h>

#define DefMacro(name) pre_##name##_e,

#define EnumList DefMacro(A)\
    DefMacro(B)\
    DefMacro(C)

typedef enum {
    EnumList
    EndOfEnum
}EnumList_ten;
