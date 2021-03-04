#include <stdio.h>
#include <stdlib.h>

/*
 *  const int a;
 *  int const a;
 *  
 *  const int *p;
 *  int const *p;
 * 
 *  int *const p;
 *  const int *const p;
 * 
 */

#define PI 3.14

int main()
{
    int i = 1, j = 100;
    const int *const p = &i;

    //p = &j; (F)
    //*p = j; (F)

    printf("*p = %d\n", *p);

    #if 0
    int i = 1;
    int j = 100;
    int *const p = &i;

    *p = 100;
    //p = &j;  (F)

    printf("*p = %d\n", *p);
    #endif

    #if 0
    int i = 1;
    int j = 100;
    const int *p = &i;

    /*
    i = 10;
    *p = 10;  //(F)
    */
    p = &j;

    printf("*p = %d\n", *p);
    #endif

    #if 0
    const float pi = 3.14;

    //pi = 3.14159; (F)
    float *p = &pi;

    *p = 3.14159;
    printf("pi = %f\n", pi);

    /*
    const float pi = 3.14;
    2 * pi * r;
    */
    #endif

    exit(0);
}