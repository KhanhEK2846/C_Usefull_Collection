#include <stdio.h>
#include <stdlib.h>
#include "FuncDefMacro.h"


int main() {
    EnumList_ten value = 3;

    switch (value)
    {
        case pre_A_e:
            printf("Value is A\n");
            break;
        case pre_B_e:
            printf("Value is B\n");
            break;
        case pre_C_e:
            printf("Value is C\n");
            break;
        default:
            printf("Value is out of range\n");
            break;
    }
    return 0;
}
