#include "API.h"

int exampleAPI_A(const char* message, int value) {
    printf("Message A: %s, Value A: %d\n", message, value);
    return 0;
}

int exampleAPI_B(const char* message, int value) {
    printf("Message B: %s, Value B: %d\n", message, value);
    return 1;
}

int exampleAPI_C(const char* message, int value) {
    printf("Message C: %s, Value C: %d\n", message, value);
    return 2;
}
