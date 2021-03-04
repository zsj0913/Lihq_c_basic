#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 5

int main()
{
    char str[STRSIZE];

    gets(str);
    puts(str);

    exit(0);
}