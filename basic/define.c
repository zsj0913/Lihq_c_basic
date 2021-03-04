#include <stdio.h>
#include <stdlib.h>

#define PI  3.1415
#define ADD (2+3)
#define MAX(a, b)   \
            ({typeof(a) A = a, B = b; ((A) > (B) ? (A) : (B));})

#if 0
int max(int a, int b)
{
    return a > b ? a : b;
}
#endif

int main()
{
    float f = 0;
    float r = 3.5;
    int a, b, c;
    int i = 5, j = 3;

    a * PI;
    b + PI;
    c / PI;

    printf("%d\n", ADD * ADD);
    printf("%d\n", MAX(5,6));

    printf("i = %d\tj = %d\n", i, j);
    printf("%d\n", MAX(i++, j++));
    printf("i = %d\tj = %d\n", i, j);

    f = PI * r * r;
    printf("f = %f\n", f);

    exit(0);
}