#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n < 0)
    {
        fprintf(stderr, "input error\n");
        exit(1);
    }
    if(n)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
    int n;
    int res;

    scanf("%d", &n);
    res = factorial(n);
    printf("res = %d\n", res);

    exit(0);
}