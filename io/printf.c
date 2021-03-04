#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STRSIZE 32

int main()
{
    printf("[%s:%d]\n", __FUNCTION__, __LINE__);
    sleep(5);
    printf("[%s:%d]", __FUNCTION__, __LINE__);

    /*
    //行缓冲模式：缓冲区满或者遇到换行\n进行刷新输出
    printf("[%s:%d] before while().", __FUNCTION__, __LINE__);
    printf("[%s:%d] before while().\n", __FUNCTION__, __LINE__);

    while(1);

    printf("[%s:%d] after while().\n", __FUNCTION__, __LINE__);
    */

    /*
    double d = 123.456;
    long i = 123l;
    long long j = 123LL;
    float f = 123.456;

    printf("%lf\n", d);
    printf("%ld\n", i);
    printf("%lld\n", j);

    printf("%ld %g\n", i, f);
    printf("%ld %g\n", i);
    printf("%ld %g\n", i, f, j);
    */

    /*
    char str[STRSIZE] = "helloworld";
    float f = 123.456;
    int i = 123;

    printf("%s\n", str);
    printf("%.5s\n", str);
    printf("%-10.5s000\n", str);
    printf("%010.2f\n", f);

    printf("%d\n", i);
    printf("%#o\n", i);
    printf("%#x\n", i);
    */

    /*
    int i = 123;
    float f = 123.456;

    printf("i = %d\n", i);
    printf("i = %8d\n", i);
    printf("i = %2d\n", i);

    printf("f = %f\n", f);
    printf("f = %7f\n", f);
    printf("f = %8.2f\n", f);
    printf("f = %3.2f\n", f);
    */

    /*
    char ch = 65;

    printf("%d\n", ch);
    printf("%c\n", ch);
    */

    exit(0);
}