#include <stdio.h>
#include "use.h"



int main()
{
#ifdef NotUse
    printf("Hello World");
#endif
#ifdef Use
    printf("Say Hi World");
#endif
    return 0;
}

