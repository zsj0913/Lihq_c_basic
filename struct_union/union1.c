#include <stdio.h>
#include <stdlib.h>

/*
struct
{
    int i;
    char ch;
    union
    {
        int a;
        char c;
    }un;
    float f;
};

union
{
    int a;
    double d;
    struct
    {
        int arr[10];
        float f;
    };
};
*/

/*
union add_un        //(F)
{
    unsigned short a;
    unsigned short b;
    unsigned int c;
};
*/

union add_un
{
    struct
    {
        unsigned short a;
        unsigned short b;
    }n;
    unsigned int c;
};

int main()
{
    unsigned int i = 0x11223344;
    union add_un a;

    //printf("0x%x\n", ((i >> 16) + (i & 0x0000FFFF)));
    a.c = i;
    printf("0x%x\n", a.n.b);
    printf("0x%x\n", a.n.a);
    printf("0x%x\n", a.n.a + a.n.b);

    exit(0);
}