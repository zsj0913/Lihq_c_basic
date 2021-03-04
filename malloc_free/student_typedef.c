#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 1024

typedef struct
{
    int id;
    char *name;
    int maths;
    int chinese;
}STU;

void stu_set(STU *p, const STU *tmp)
{
    p->id = tmp->id;
    p->name = malloc(strlen(tmp->name) + 1);
    if(p->name == NULL)
    {
        exit(1);
    }
    strcpy(p->name, tmp->name);
    p->maths = tmp->maths;
    p->chinese = tmp->chinese;

    //*p = *tmp;
}

void stu_show(STU *p)
{
    printf("%d %s %d %d\n", p->id, p->name, p->maths, p->chinese);
}

void stu_changename(STU *p, const char *src)
{
    free(p->name);   //!!!
    p->name = malloc(strlen(src) + 1);
    if(p->name == NULL)
    {
        exit(1);
    }
    strcpy(p->name, src);
}

void menu()
{
    printf("\n1: set\n2: change name\n3: show\n\n");
}

int main()
{
    STU stu, tmp;
    char name[MAXSIZE];
    int choice;

    while(1)
    {
        menu();
        if(scanf("%d", &choice) != 1)
            exit(1);

        switch (choice)
        {
        case 1:
            tmp.name = malloc(MAXSIZE);
            if(tmp.name == NULL)
            {
                exit(1);
            }
            printf("please enter for stu[id name maths chinese]:\n");
            scanf("%d%s%d%d", &tmp.id, tmp.name, &tmp.maths, &tmp.chinese);
            stu_set(&stu, &tmp);
            break;
        case 2:
            printf("please enter new name:\n");
            scanf("%s", name);
            stu_changename(&stu, name);
            break;
        case 3:
            stu_show(&stu);
            break;
        
        default:
            printf("input error\n");
            exit(1);
            break;
        }
    }

    exit(0);
}