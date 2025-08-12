#include "TablePointer.h"

int main() {
    char* Message = "Hello, World!";
    int Value = 42;
    int result;

    for (int i = 0; i < API_Max; i++) {
        result = CallBackAPI(i);
        switch (result)
        {
        case API_A:
            /* code for API_A */
            printf("API_A be called \n");
            break;

        case API_B:
            /* code for API_B */
            printf("API_B be called \n");
            break;

        case API_C:
            /* code for API_C */
            printf("API_C be called \n");
            break;

        default:
            printf("Unknown API called \n");
            break;
        }
    }

    return 0;
}
