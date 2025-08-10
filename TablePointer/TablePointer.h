#include <stdio.h>
#include <stdlib.h>


typedef int (*FUNC)(const char*,int);



enum {
    API_A,
    API_B,
    API_C,
    API_Max
} APIEnumList_e;

int exampleAPI_A(const char* message, int value);
int exampleAPI_B(const char* message, int value);
int exampleAPI_C(const char* message, int value);

typedef struct{
    FUNC api_ptr;
}APIList_tst;

const APIList_tst TableFunctions[] = {
    {exampleAPI_A},
    {exampleAPI_B},
    {exampleAPI_C},
    {NULL}
};

#define CallBackAPI(index) (TableFunctions[index].api_ptr(Message, Value))
