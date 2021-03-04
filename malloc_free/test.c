#include <stdio.h>
#include <stdlib.h>

void func(int **p, int n)      //不能传入int *p
{
    *p = malloc(n);
    if(*p == NULL)
    {
        exit(1);
    }
    (*p)[1] = 100;

    return;
}

int *func2(int *p, int n)      //不能传入int *p
{
    p = malloc(n);
    if(p == NULL)
    {
        exit(1);
    }
    p[1] = 100;

    return p;
}

int main()
{
    int num = 100;
    int *p = NULL;

    //func(&p, num);
    p = func2(p, num);
    printf("p[1] = %d\n", p[1]);

    free(p);
    exit(0);
}