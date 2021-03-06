#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE 32

struct student_st
{
    int id;
    char name[NAMESIZE];
    int maths;
    int chinese;
};

void stu_set(struct student_st *p, const struct student_st *tmp)
{
    #if 0
    p->id = tmp->id;
    strcpy(p->name, tmp->name);
    p->maths = tmp->maths;
    p->chinese = tmp->chinese;
    #endif

    *p = *tmp;
}

void stu_show(struct student_st *p)
{
    printf("%d %s %d %d\n", p->id, p->name, p->maths, p->chinese);
}

void stu_changename(struct student_st *p, const char *src)
{
    strcpy(p->name, src);
}

void menu()
{
    printf("\n1: set\n2: change name\n3: show\n\n");
}

int main()
{
    struct student_st stu, tmp;
    char name[NAMESIZE];
    int choice;

    while(1)
    {
        menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
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

    #if 0
    printf("please enter for stu[id name maths chinese]:\n");
    scanf("%d%s%d%d", &tmp.id, tmp.name, &tmp.maths, &tmp.chinese);

    stu_set(&stu, &tmp);
    stu_show(&stu);

    printf("please enter new name:\n");
    scanf("%s", name);
    //stu_changename(&stu, "John");
    stu_changename(&stu, name);
    stu_show(&stu);
    #endif

    exit(0);
}