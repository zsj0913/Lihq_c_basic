#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* name[5] = {"follow me", "basic", "great", "hello", "hi"};
    char* tmp = NULL;
    int flag = 0, num;

    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(strcmp(name[j], name[i]) < 0)
            {
                flag = 1;
                num = j;
            }
        }
        if(flag)
        {
            flag = 0;
            tmp = name[i];
            name[i] = name[num];
            name[num] = tmp;
        }
    }

    printf("\nafter sort:\n\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }

    exit(0);
}