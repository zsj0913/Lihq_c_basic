#include <stdio.h>
#include <stdlib.h>

//TYPE NAME = VALUE
//a[i] = *(a+i) = *(p+i) = p[i]
//&a[i] = a+i = p+i = &p[i]

int main()
{
    int a[] = {5,1,7,2,8,3};
    int y;
    int* p = &a[1];

    y = (*--p)++;
    printf("y = %d\n", y);
    printf("a[0] = %d\n", a[0]);

    #if 0
    //创建匿名对象, 没有数组名
    int* p = (int [3]){1,2,3};

    for(int i = 0; i < 3; i++)
    {
        printf("%p --> %d\n", p+i, p[i]);
    }
    #endif


    #if 0
    int a[3];
    int* p = a;

    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        printf("%p --> %d\n", a+i, a[i]);
    }

    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        //scanf("%d", a+i);
        scanf("%d", p++);
    }

    p = a;
    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        printf("%p --> %d\n", p++, *p);
    }

    /* (F)
    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        printf("%p --> %d\n", p, *p++);
    }
    printf("a[3] = %d\n", a[3]);
    */

    #endif

    #if 0
    int a[3];
    int* p = a;

    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        //scanf("%d", a+i);
        scanf("%d", p+i);
    }

    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        printf("%p --> %d\n", a+i, a[i]);
    }
    #endif

    #if 0
    int a[3] = {1,2,3};
    int* p = a;

    /*
    char* q;
    printf("%p\t%p\n", q, q+1);
    */

    printf("%p\t%p\n", a, a+1);
    printf("%p\t%p\n", p, p+1);
    
    //a是数组名，是地址常量；p是指针变量; 
    //sizeof(p)/sizeof(*p)  (F)
    //a++  (F)
    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        //printf("%p --> %d\n",a+i, a[i]);
        //printf("%p --> %d\n",p+i, p[i]);
        printf("%p --> %d\n",p+i, *(p+i));
    }
    #endif

    exit(0);
}