#include <stdio.h>
#include <stdlib.h>

#define M   2
#define N   3

int main()
{
    //int a[M][N] = {0};
    //int a[M][N] = {{1,2,3}, {7,8,9}};
    //int a[M][N] = {{1,2,3}};
    //int a[M][N] = {{1,2}, {3}};
    //int a[M][N] = {1,2,3,4};

    int a[][N] = {1,2,3,7,8};

    printf("a = %p\n", a);
    printf("a+1 = %p\n", a+1);
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%p --> %d\t",*(a+i)+j, a[i][j]);
        }
        printf("\n");
    }

    printf("size of a = %lu\n", sizeof(a));

    exit(0);
}