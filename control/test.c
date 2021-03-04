#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MONEY 100
#define STRSIZE 32
#define PI 3.14

static void test11()
{
    float area;
    int r = 1;

    while(1)
    {
        area = PI * r * r;
        if(area <= 100)
        {
            printf("%f\n", area);
            r++;
        }
        else
        {
            break;
        }
    }

    return;
}

static void test10()
{
    int num;
    int sum = 0;

    printf("please enter a integer number(q to quit): \n");
    while(scanf("%d", &num) == 1)
    {
        sum += num;
        printf("please enter the next number(q to quit): \n");
    }
    printf("sum = %d\n", sum);

    return;
}

static void test9_2()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4-i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i+1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < i+3; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < 2-i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return;
}

static void test9()
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6-i; j++)
        {
            putchar('A' + i + j);
        }
        putchar('\n');
    }

    return;
}

static void test8()
{
    int flag = 0;

    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            flag = 0;
        }
        else
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    return;
}

static void test7()
{
    int a, b, c;

    for(int i = 100; i < 1000; i++)
    {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if(i == a*a*a + b*b*b + c*c*c)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    return;
}

static void test6()
{
    int a, b, c;

    for(int a = 0; a < 20; a++)
    {
        for(int b = 0; b <= 33; b++)
        {
            c = 100 - a - b;
            if(c % 3 == 0)
            {
                if(a*5 + b*3 + c/3*1 == 100)
                    printf("🐓 = %d, 母鸡 = %d, 小鸡 = %d\n", a, b, c);
            }
        }
    }

    return;
}

static void test5()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d * %d = %d\t",j+1, i+1, (i+1) * (j+1));
        }
        printf("\n");
    }

    return;
}

static void test4()
{
    int a = 1, b = 1;
    int c;
    int cnt = 2;

    printf("%d\t%d\t", a, b);
    while(cnt < 40)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
        cnt++;
    }
    printf("\n");

    return;
}

static void test3()
{
    char ch;
    int num = 0;

    printf("please enter character: \n");
    while(1)
    {
        if(scanf("%c", &ch) != 1)
        {
            fprintf(stderr, "input error\n");
            exit(1);
        }
        if(ch == 'q')
            break;

        switch(ch)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u': num++;
                break;
            default: break;
        }
    }
    printf("元音字母共有%d个\n", num);

    /*
    char str[STRSIZE];
    int i = 0;
    int num = 0;

    gets(str);
    while (str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' 
            || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            num++;
        i++;
    }
    printf("元音字母共有%d个\n", num);
    */
    
    return;
}

static void test2()
{
    float odd = 0, even = 0;
    int num_odd = 0, num_even = 0;
    int tmp;

    printf("please enter integer number: \n");
    while(1)
    {
        if(scanf("%d", &tmp) != 1)
        {
            fprintf(stderr, "input error\n");
            exit(1);
        }
        if(tmp == 0)
            break;
        if(tmp < 0)
        {
            fprintf(stderr, "please input nonnegative number\n");
            exit(1);
        }

        if(tmp % 2 == 0)
        {
            even += tmp;
            num_even++;
        }
        else if(tmp % 2 == 1)
        {
            odd += tmp;
            num_odd++;
        }
        else
        {
            fprintf(stderr, "error happened\n");
            exit(1);
        }

    }
    printf("num_even = %d, average = %f\n", num_even, even/num_even);
    printf("num_odd = %d, average = %f\n", num_odd, odd/num_odd);

    return;
}

static void test1()
{
    float a = MONEY, b = MONEY;
    int i = 0;

    while (b <= a)
    {
        a += MONEY * 0.1;
        b = b * (1+0.05);
        i++;
    }
    printf("第%d年后B的投资超过A，此时A = %f, B = %f\n", i, a, b);

    return;
}

int main()
{
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    //test8();
    //test9();
    //test9_2();
    //test10();
    test11();

    exit(0);
}