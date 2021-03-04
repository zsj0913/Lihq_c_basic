#include <stdio.h>
#include <stdlib.h>

#define M 3

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    printf("size of arr = %d\n", sizeof(arr));

    #if 0
    int i = 3;
    //int arr[i];   取决于编译器的实现

    //int arr[M] = {1, 2, 3};
    //int arr[M] = {1};
    static int arr[M];

    //arr = {1, 2, 3};  arr为地址常量！
    
    printf("arr = %p\n", arr);
    for(int i = 0; i < M; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < M; i++)
    {
        printf("%p --> %d\n",arr+i, arr[i]);
    }
    printf("size of arr = %lu\n", sizeof(arr));
    #endif

    exit(0);
}