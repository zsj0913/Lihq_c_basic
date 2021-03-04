#include <stdio.h>
#include <stdlib.h>

//TYPE NAME = VALUE

int main()
{
    int a[2][3] = {1,2,3,4,5,6};
    int *p = *a;
    int (*q)[3] = a;

    printf("%p\t%p\n", a, a+1);
    printf("%p\t%p\n", q, q+1);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%p --> %d\n", *(q+i)+j, *(*(q+i)+j));
        }
    }


    #if 0
    //int* p = a;  (W)
    int* p = *a;    //int* p = *(a+0);

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", p[i]);
    }

    /*
    printf("a = %p\ta+1 = %p\n", a, a+1);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%p --> %d\n", *(a+i)+j, *(*(a+i)+j));
        }
    }
    */
    #endif

    exit(0);
}