#include <stdio.h>
#include <stdlib.h>

union test_un
{
    int i;
    float f;
    double d;
    char ch;
};

int main()
{
    union test_un a;
    union test_un *p = &a;
    union test_un arr[3];

    a.f = 345.678;
    printf("size of a = %lu\n", sizeof(a));
    printf("a.f = %f\n", a.f);
    printf("p->f = %f\n", p->f);
    //printf("a.i = %d\n", a.i);

    //func(&a);

    exit(0);
}