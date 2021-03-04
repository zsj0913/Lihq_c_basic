#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])   //传进去字符指针数组首地址
{
    //printf("helloworld\n");

    printf("argc = %d\n", argc);

    #if 0
    for(int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    #endif

    int i = 0;
    while(argv[i] != NULL)
    {
        puts(argv[i]);
        i++;
    }

    return 0;
}