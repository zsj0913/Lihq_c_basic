#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    scanf("%d", &year);
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        printf("%d is leap year\n", year);
    else
        printf("%d is not leap year\n", year);

    #if 0
    int score;

    printf("enter a score[0, 100]: \n");
    scanf("%d", &score); 
    if(score < 0 || score > 100)
    {
        fprintf(stderr, "input error\n");
        exit(1);
    }

    if(score >= 90)
        puts("A");
    else if(score >= 80)
        puts("B");
    else if(score >= 70)
        puts("C");
    else if(score >= 60)
        puts("D");
    else
        puts("E");

    /*
    if(score <= 100 && score >= 90)
        printf("A\n");
    if(score < 90 && score >= 80)
        printf("B\n");
    if(score < 80 && score >= 70)
        printf("C\n");
    if(score < 70 && score >= 60)
        printf("D\n");
    if(score < 60 && score >= 0)
        printf("E\n");
    */

   #endif


    #if 0
    int a = 1, b = 1, c = 2;

    if(a == b)
    {
        if(b == c)
            printf("a == b == c\n");
    }
    else
        printf("a != b\n");
    #endif

    #if 0
    int a = 9, b = 10;

    if(b++ < a)
        printf("1\n");
    else
        printf("0\n");
    
    printf("a = %d, b = %d\n", a, b);
    printf("%d\n", (++b < a, ++a, b++));
    #endif

    exit(0);
}