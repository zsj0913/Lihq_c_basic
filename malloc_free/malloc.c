#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL;

    p = malloc(sizeof(int));
    if(p == NULL)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
    *p = 10;
    printf("%p --> %d\n", p, *p);

    free(p);
    p = NULL;  //良好习惯

    *p = 123;
    printf("%p --> %d\n", p, *p);

    exit(0);
}