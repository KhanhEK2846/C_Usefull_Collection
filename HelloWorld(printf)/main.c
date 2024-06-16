#include <stdio.h>

#define getName(var)  #var 
typedef void (*FUNC)(char*);

void Function(char* data)
{
    if(data == "printf")
        printf("Hello World");
}

FUNC HelloWorld = &Function;

int main()
{
    HelloWorld("printf");
    return 0;
}