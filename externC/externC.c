#include <stdio.h>

#define Use

#ifdef Use
#include "somedeclare.h"
extern int var;
#else
extern int var = 1;


#endif
int main(void)
{
    printf("%d\n",var);
    var = 20;
    printf("%d",var);
    return 0;
}
