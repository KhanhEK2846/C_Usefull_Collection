#include <stdio.h>
#include <stdlib.h>
#include "DefineMacro.h"

int main() {

#ifdef Warning
    #warning "Warning: Something might be wrong."
#elif defined Error
    #error "Error: Something is definitely wrong."
#endif

    return 0;
}
