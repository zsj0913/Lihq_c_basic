#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WEIGHT  3.0e-23
#define KQ 950

static void root()
{
    float a, b, c;
    float delta;
    float x1, x2;

    printf("please enter for a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if(delta < 0)
    {
        fprintf(stderr, "Input error.\n");
        exit(1);
    }

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);

    return;
}

static void area()
{
    float a, b, c;
    float area;
    float s;

    printf("please enter for a,b,c: \n");
    scanf("%f%f%f", &a, &b, &c);
    if(a+b <= c || b+c <= a || a+c <= b)
    {
        fprintf(stderr, "Input error\n");
        exit(1);
    }
    s = 1.0 / 2 *(a + b + c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area = %f\n", area);

    return;
}

static void water()
{
    float num;
    float sum;
    
    printf("please enter for num: \n");
    scanf("%f", &num);
    if(num <= 0)
    {
        fprintf(stderr, "Input error\n");
        exit(1);
    }
    sum = num * KQ / WEIGHT;

    printf("sum = %g\n", sum);

    return;
}

int main()
{
    //water();
    //area();
    root();

    exit(0);
}