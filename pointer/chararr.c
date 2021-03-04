#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = "hello";

    printf("size of str = %d\nstrlen of str = %d\n", 
            sizeof(str), strlen(str));
    //strcpy(str, "world");  (F)
    str = "world";
    puts(str);

    #if 0
    char str[] = "hello";

    printf("szie of str = %d\n", sizeof(str));

    //str = "world";  (F)
    strcpy(str, "world");
    puts(str);
    #endif

    #if 0
    char str[] = "I love china";
    char *p = str+7;

    puts(str);
    puts(p);
    #endif

    exit(0);
}