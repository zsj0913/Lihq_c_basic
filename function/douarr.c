#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

/*
 *  int a[M][N] = {...};
 *  int* p = *a;
 *  int (*q)[N] = a;
 * 
 *  实参：a[i][j]    *(a+i)+j    a[i]+j    p[i]   *p   
 *        q[i][j]    *q      q            p+3     q+2
 *  形参：int        int*        int*      int    int
 *        int        int*    int (*)[N]   int*    int (*)[N]
 * 
 * */

//void print_douarr(int (*p)[N], int m)
void print_douarr(int p[][N], int m)
{
    printf("szie of p = %lu\n", sizeof(p));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //printf("%d\t", p[i][j]);
            printf("%d\t", *(*(p+i)+j));
        }
        printf("\n");
    }
}

void print_douarr2(int* p, int n)
{
    printf("szie of p = %lu\n", sizeof(p));
    for(int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

float average_score(int* p, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum/n;
}

void find_num(int (*p)[N], int num)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d ", p[num][i]);
    }
    printf("\n");
}

int *find_num2(int (*p)[N], int num)
{
    if(num > M-1)
        return NULL;
    return *(p+num);
}

int main()
{
    int a[M][N] = {1,2,3,4,5,6,7,8,9,10,11,12};
    float ave;
    int num = 3;
    int *res;

    ave = average_score(*a, M*N);
    printf("ave = %f\n", ave);

    //find_num(a, num);
    res = find_num2(a, num);
    if(res != NULL)
    {
        for(int i = 0; i < N; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");
    }
    else
    {
        printf("can not find\n");
    }

    //printf("szie of a = %d\n", sizeof(a));
    //print_douarr(a, M);
    //print_douarr2(&a[0][0], M*N);  // *a, a[0], *(a+0)
    
    exit(0);
}