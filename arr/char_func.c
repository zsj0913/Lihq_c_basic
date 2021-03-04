#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRSIZE 32

/*
 *strlen  &  sizeof
 *strcpy  &  strncpy
 *strcat  &  strncat
 *strcmp  &  strncmp
 */

int main()
{
    char str[STRSIZE] = "hello";
    char str1[STRSIZE] = "world";
    char str2[STRSIZE] = "hella";

    printf("%d\n", strcmp(str, str1));
    printf("%d\n", 'h'-'w');
    printf("%d\n", strncmp(str, str2, 5));
    printf("%d\n", 'o'-'a');

    #if 0
    char str[STRSIZE] = "hello";

    //strcat(str, " world");
    strncat(str, " world", 3);
    puts(str);
    #endif

    #if 0
    char str[STRSIZE];

    strncpy(str, "abcde", STRSIZE);
    puts(str);
    #endif

    #if 0
    char str[] = "hello\0abc";

    printf("%lu\n", strlen(str));
    printf("%lu\n", sizeof(str));
    #endif

    exit(0);
}