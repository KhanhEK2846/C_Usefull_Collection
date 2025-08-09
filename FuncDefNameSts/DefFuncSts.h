#include <stdio.h>
#include <stdlib.h>
#include "StructList.h"

#define DefStruct(name) pre_##name##_tst name##_st;

#define StructList DefStruct(example01) \
    DefStruct(example02)

typedef struct {
    StructList
} AllStructList_tst;
