#include <stdio.h>
#include <stdlib.h>

/*
 *  int a[N] = {1,2,3,4,5,6};
 *  int* p = a;
 * 
 *  实参：a      *a    a[0]    &a[3]   p[i]   p      *p     p+1
 *  形参：int*   int   int     int*    int    int*   int    int*
 * 
 * */

//void print_arr(int *p, int n)
void print_arr(int p[], int n)
{
    printf("[%s]: sizen of p = %d\n", __FUNCTION__, sizeof(p));
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", p[i]);
    }
    printf("\n");
}

void reverse(int* p, int n)
{
    int tmp;

    for(int i = 0; i < n/2; i++)
    {
        tmp = p[i];
        p[i] = p[n-1-i];
        p[n-1-i] = tmp;
    }
}

//int main(int argc, char* argv[])
int main(int argc, char** argv)
{
    int a[] = {1,3,5,7,9};

    printf("[%s]: size of a = %d\n", __FUNCTION__, sizeof(a));
    print_arr(a, sizeof(a)/sizeof(*a));

    reverse(a, sizeof(a)/sizeof(*a));
    print_arr(a, sizeof(a)/sizeof(*a));

    exit(0);
}