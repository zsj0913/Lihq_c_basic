#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *p = NULL;

    p = malloc(sizeof(int)*num);
    if(p == NULL)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }

    for(int i = 0; i < num; i++)
    {
        scanf("%d", p+i);
    }
    for(int i = 0; i < num; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    exit(0);
}