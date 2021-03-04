#include <stdio.h>
#include <stdlib.h>

#define M   2
#define N   3
#define K   2

static void multiply()
{
    int a[M][N] = {1,2,3,4,5,6};
    int b[N][K] = {1,0,0,1,1,0};
    int c[M][K] = {0};

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < K; j++)
        {
            for(int k = 0; k < N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < K; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return;
}

static void sum()
{
    int a[5][4] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            a[i][3] += a[i][j];
            a[4][3] += a[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            a[4][i] += a[j][i];
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return;
}

static void max()
{
    int a[M][N] = {34,3,22,4,56,78};
    int max = a[0][0];
    int row = 0, col = 0;

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("max = %d, row = %d, col = %d\n", max, row, col);

    return;
}

static void change()
{
    int a[M][N] = {1,2,3,4,5,6}, b[N][M];

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d\t", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("after transform:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return;
}

int main()
{
    //change();
    //max();
    //sum();
    multiply();

    exit(0);
}