#include <stdio.h>
#include <stdlib.h>

union
{
    struct
    {
        unsigned char a:1;
        char b:2;
        char c:1;
    }x;
    char y;
}w;

int main()
{
    w.y = 6;

    //printf("%d\n", w.x.a);
    printf("%d\n", w.x.b);

    exit(0);
}