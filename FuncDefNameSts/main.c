#include <stdio.h>
#include <stdlib.h>
#include "DefFuncSts.h"

AllStructList_tst all_structs;

int main(){

    all_structs.example01_st.a_0 = 5;
    all_structs.example01_st.b_0 = 3.14f;

    all_structs.example02_st.a_1 = 10;
    all_structs.example02_st.b_1 = 2.71f;

    printf("Example 01: a_0 = %d, b_0 = %f\n", all_structs.example01_st.a_0, all_structs.example01_st.b_0);
    printf("Example 02: a_1 = %d, b_1 = %f\n", all_structs.example02_st.a_1, all_structs.example02_st.b_1);

    return 0;
}
