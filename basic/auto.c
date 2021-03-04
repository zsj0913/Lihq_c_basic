#include <stdio.h>
#include <stdlib.h>

int i = 0;

void print_star()
{
    for (i = 0; i < 5; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("[%s]i = %d\n",__FUNCTION__, i);
}

int main()
{
    for (i = 0; i < 5; i++)
    {
        print_star();
    }
    printf("[%s]i = %d\n",__FUNCTION__, i);

    exit(0);
}

#if 0
int i = 100;

void func(int i)
{
    printf("i = %d\n", i);
}

int main()
{
    //int i = 2;
    int i = 3;

    func(i);
    {
        int i = 6;
        printf("i = %d\n", i);
    }
    

    exit(0);
}
#endif

#if 0
void func()
{
    static int  y = 0;
    int x = 0;
    x++;
    y++;

    printf("x: %p -> %d\n", &x, x);
    printf("y: %p -> %d\n", &y, y);
}

int main()
{
    /*
    auto int i;
    int j;

    printf("i = %d\n", i);
    printf("j = %d\n", i);
    */

    func();
    func();
    func();

    exit(0);
}
#endif