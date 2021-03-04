#include <stdio.h>
#include <stdlib.h>

char *mystrcpy(char *dst, const char *src)
{
    int i;

    if(src == NULL || dst == NULL)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }

    for(i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    return dst;
}

char *mystrncpy(char *dst, const char *src, int n)
{
    int i;

    if(src == NULL || dst == NULL)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    return dst;
}

int main()
{
    char str1[] = "helloworld";
    char str2[128];

    //mystrcpy(str2, str1);
    mystrncpy(str2, str1, 5);
    puts(str2);

    exit(0);
}