#include <stdio.h>
#include <stdlib.h>

#define N 10
#define SIZE 32

static void primer()
{
    char primer[1001] = {0};

    for(int i = 2; i < 1001; i++)
    {
        if(primer[i] == 0)
        {
            for(int j = i*2; j < 1001; j += i)
            {
                primer[j] = -1;
            }
        }
    }

    for(int i = 2; i < 1001; i++)
    {
        if(primer[i] == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    return;
}

static void base_convert()
{
    int num, base;
    int n[SIZE] = {0};
    int i = 0;

    printf("please enter the converted number[10]:\n");
    scanf("%d", &num);

    printf("please enter the base[2, 8, 16]:\n");
    scanf("%d", &base);

    if( !(base == 2 || base == 8 || base == 16) )
    {
        fprintf(stderr, "base input error\n");
        exit(1);
    }

    while(1)
    {
        n[i] = num % base;
        num = num / base;
        i++;

        if(num == 0)
        {
            break;
        }
        if(i == SIZE)
        {
            fprintf(stderr, "number overrun!\n");
            exit(1);
        }
        
    }

    if(base == 2 || base == 8)
    {
        for(i--; i >= 0; i--)
        {
            putchar('0' + n[i]);
        }
        printf("\n");
    }
    else if(base == 16)
    {
        for(i--; i >= 0; i--)
        {
            if(n[i] < 10)
            {
                putchar('0' + n[i]);
            }
            else
            {
                putchar('A' + n[i] - 10);
            }
        }
        printf("\n");
    }
    else
    {
        fprintf(stderr, "error\n");
        exit(1);
    }

    return;
}

static void sort2()
{
    int a[N] = {12,8,45,30,98,67,45,7,68,11};
    int tmp;
    int num, flag = 0;

    printf("sort before:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for(int i = 0; i < N-1; i++)
    {
        tmp = a[i];
        for(int j = i+1; j < N; j++)
        {
            if(tmp > a[j])
            {
                tmp = a[j];
                num = j;
                flag = 1;
            }
        }
        if(flag)
        {
            tmp = a[i];
            a[i] = a[num];
            a[num] = tmp;
            flag = 0;
        }
    }

    printf("sort after:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return;
}

static void sort1()
{
    int a[N] = {12,8,45,30,98,67,2,7,68,11};
    int tmp;

    
    printf("sort before:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    

    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    printf("sort after:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return;
}

static void fibonacci()
{
    int fib[10] = {1,1};
    int tmp;

    for(int i = 2; i < sizeof(fib)/sizeof(fib[0]); i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < sizeof(fib)/sizeof(fib[0])/2; i++)
    {
        tmp = fib[i];
        fib[i] = fib[sizeof(fib)/sizeof(fib[0]) - 1 - i];
        fib[sizeof(fib)/sizeof(fib[0]) - 1 - i] = tmp;
    }

    for(int i = 0; i < sizeof(fib)/sizeof(fib[0]); i++)
    {
        printf("%d\t", fib[i]);
    }
    printf("\n");

    return;
}

int main()
{
    //fibonacci();
    //sort1();
    //sort2();
    //base_convert();
    primer();

    exit(0);
}