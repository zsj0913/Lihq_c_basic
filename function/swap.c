#include <stdio.h>
#include <stdlib.h>

void print_value(int i, int j)
{
    printf("i = %d\tj = %d\n", i, j);
}

void swap(int* p, int* q)
{
    int tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}

int main()
{
    int i = 3, j = 5;

    //print_value(i, j);
    swap(&i, &j);
    printf("i = %d\tj = %d\n", i, j);

    exit(0);
}