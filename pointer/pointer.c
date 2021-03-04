#include <stdio.h>
#include <stdlib.h>

//  TYPE NAME = VALUE

int main()
{
    int i = 1;
    int* p = &i;
    int** q = &p;

    //int* p = 0x2000;   野指针

    //i, *p, **q
    //&i, p, *q

    printf("size of i = %d\n", sizeof(i));
    printf("size of p = %d\n", sizeof(p));
    printf("size of q = %d\n", sizeof(q));
    printf("\n");

    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("\n");

    printf("p = %p\n", p);
    printf("&p = %p\n", &p);
    printf("*p = %d\n", *p);
    printf("\n");

    printf("q = %p\n", q);
    printf("&q = %p\n", &q);
    printf("*q = %p\n", *q);
    printf("**q = %d\n", **q);

    exit(0);
}