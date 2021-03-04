#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool a = true;

    printf("a = %d\n", a);

    exit(0);
}

/*
    |f - 0| <= 10^-6
    f == 0
*/

int func(float f)
{
    if(f < 0)
        return -1;
    else if(f == 0)     //fabs(f - 0) <= 1e-6
        return 0;
    else
        return 1;
}