#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int main()
{
    int a = 3, b = 5;
    int ret;

    int (*funcp[2])(int, int) = {add, sub};

    ret = funcp[0](a, b);
    printf("ret = %d\n", ret);
    ret = funcp[1](a, b);
    printf("ret = %d\n", ret);

    #if 0
    int (*p)(int, int);
    int (*q)(int, int);

    //ret = add(a, b);
    p = add;
    //p = &add;
    ret = p(a, b);
    printf("ret = %d\n", ret);
    q = sub;
    ret = q(a, b);
    printf("ret = %d\n", ret);
    #endif

    exit(0);
}