#include <stdio.h>
#include <stdlib.h>
#include "API.h"

typedef int (*FUNC)(const char*,int);

typedef enum {
    API_A,
    API_B,
    API_C,
    API_Max
} APIEnumList_e;

typedef struct{
    FUNC api_ptr;
}APIList_tst;

extern const APIList_tst TableFunctions[];

#define CallBackAPI(index) (TableFunctions[index].api_ptr(Message, Value))
