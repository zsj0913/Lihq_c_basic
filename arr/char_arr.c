#include <stdio.h>
#include <stdlib.h>

#define N 32

int main()
{
    char str[N], str1[N], str2[N];
    //str = "hello";   (F)

    scanf("%s%s%s", str, str1, str2);
    printf("%s\n%s\n%s\n", str, str1, str2);

    #if 0
    //char str[N];
    char str[N] = {'h', 'e', 'l', 'l', 'o'};
    //char* str = "helloworld";   !!!

    //gets(str);
    puts(str);
    #endif

    #if 0
    //char str[N] = {'h', 'e', 'l', 'l', 'o'};
    char str[N] = "hello";

    for(int i = 0; i < N; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    #endif

    exit(0);
}