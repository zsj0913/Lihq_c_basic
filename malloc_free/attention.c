#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name = "hello";

    //scanf("%s", name);  (F name必须为足够长的字符数组)
    name = "world";
    puts(name);

    exit(0);
}