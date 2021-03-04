#include <stdio.h>
#include <stdlib.h>

int fibnacci(int n)
{
    if(n <= 0)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
    if(n == 1 || n == 2)
        return 1;
    return fibnacci(n-1) + fibnacci(n-2);
}

int main()
{
    int n;
    int res;

    scanf("%d", &n);
    res = fibnacci(n);
    printf("res = %d\n", res);

    exit(0);
}