#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[128];
    int num = 0;
    int flag = 1;

    gets(str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\t')
        {
            flag = 1;
        }
        else
        {
            if(flag)
            {
                num++;
                flag = 0;
            }
        }
    }
    printf("word num = %d\n", num);

    exit(0);
}