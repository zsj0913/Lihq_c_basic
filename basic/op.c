#include <stdio.h>
#include <stdlib.h>


/*
5 / 2 = 2;

5 % 2 = 1;

5.0 / 2 = 2.5

5.0 % 2  表达式错误，要求两边操作数必须为整型


自增自减：
    运算符在前，先进行计算，再取变量值使用
    变量在前，先取变量值使用，再进行计算

    i++;  ->  i = i + 1;

    int i = 1;
    i++;  -->  表达式值为1，i值为2
    ++i;  -->  表达式值为2，i值为2

*/
int main()
{
    int i = 1, j = 10, value;
    int a = 6;

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(double));

    /*
    a -= a *= a += 3;
    printf("a = %d\n", a);
    */

    /*
    printf("%d\n", i > j);
    printf("%d\n", i <= j);
    printf("%d\n", !j);
    printf("%d\n", i && j);
    */

    //value = i++ + ++i - i-- + --i; (禁止此种写法！)
    
    /*
    value = --i + j++;
    i = i - 1;
    j;
    value = i + j
    j = j + 1;
    */

    /*
    value = i++ + ++j;

    i;
    j = j + 1;
    value = i + j;
    i = i + 1;
    */

    /*
    printf("value = %d\n", value);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    */

    exit(0);
}


