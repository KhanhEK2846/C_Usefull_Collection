#include "FuncDefEnumMacro.h"

int main()
{
    all_structs.example01_st.a_0 = 1;
    all_structs.example01_st.b_0 = 2.0f;
    all_structs.example02_st.a_1 = 3;
    all_structs.example02_st.b_1 = 4.0f;
    all_structs.example03_st.a_2 = 5;
    all_structs.example03_st.b_2 = 6.0f;

    for(int index=0;index<EndOfEnum;index++)
    {
        switch(index)
        {
            case pre_example01_e:
                printf("example01: a_0=%d, b_0=%.2f\n", all_structs.example01_st.a_0, all_structs.example01_st.b_0);
                break;
            case pre_example02_e:
                printf("example02: a_1=%d, b_1=%.2f\n", all_structs.example02_st.a_1, all_structs.example02_st.b_1);
                break;
            case pre_example03_e:
                printf("example03: a_2=%d, b_2=%.2f\n", all_structs.example03_st.a_2, all_structs.example03_st.b_2);
                break;
            default:
                break;
        }
    }

    return 0;
}
