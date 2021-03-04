#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 3

int main()
{
    int i;
    float f;
    char str[STRSIZE];
    char ch;

    printf("please enter:\n");

    scanf("%d", &i);
    //ch = getchar();
    //scanf("%c", &ch);
    scanf("%*c%c", &ch);

    printf("i = %d\n", i);
    printf("ch = %d\n", ch);
    printf("\\n = %d\n", '\n');

    /*
    while (scanf("%d", &i))
    {
        printf("i = %d\n", i);
    }
    */

    /*
    //scanf 放在while()中非常危险
    while (1)
    {
        scanf("%d", &i);
        printf("i = %d\n", i);
    }
    */
    

    /*
    //!!!
    scanf("%s", str);
    printf("%s\n", str);
    */

    /*
    scanf("%d%f", &i, &f);
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    */

    exit(0);
}