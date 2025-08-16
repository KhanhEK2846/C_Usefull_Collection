#include "StructList.h"
#include "ListName.h"

#define DefStructEnum(name) pre_##name##_e,
typedef enum {
    ListName
    EndOfEnum
}EnumList_ten;
#undef DefStructEnum

#define DefStructEnum(name) pre_##name##_tst name##_st;
typedef struct {
    ListName
} AllStructList_tst;

AllStructList_tst all_structs;
