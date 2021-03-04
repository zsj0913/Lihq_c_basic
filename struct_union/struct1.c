#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE 32

/*
struct
{
    int i;
    float f;
    char ch;
}a = {1, 2.3, 'a'}, b = {.f = 123.456}, c, *p, *q;
*/

struct simple_st
{
    int i;
    float f;
    char ch;
};    //__attribute__((packed));

struct birthday_st
{
    int year;
    int month;
    int day;
}birth;

struct student_st
{
    int id;
    char name[NAMESIZE];
    struct birthday_st birth;
    int maths;
    int chinese;
};

/*
struct student_st
{
    int id;
    char name[NAMESIZE];
    struct birthday_st
    {
        int year;
        int month;
        int day;
    }birth;
    int maths;
    int chinese;
};
*/

void func(struct simple_st b)
{
    printf("size of b = %lu\n", sizeof(b));
}

void func2(struct simple_st *p)
{
    printf("size of p = %lu\n", sizeof(p));
}

int main()
{
    //TYPE NAME = VALUE;
    struct simple_st a;
    struct simple_st *p = &a;

    func(a);
    func2(p);

    #if 0
    struct simple_st a = {123, 456.789, 'a'};
    struct student_st stu = {10011, "Alen", {2002, 2, 29}, 88, 97};
    struct student_st stu1 = {.maths = 98, .chinese = 86};
    struct student_st *p = &stu;
    struct student_st arr[2] = {{10011, "Alen", {2002, 2, 29}, 88, 97}, 
                        {.maths = 99, .chinese = 89}};
    struct student_st *arr2[2];

    printf("%d %s %d-%d-%d %d %d\n", 
        stu.id, stu.name, stu.birth.year, stu.birth.month, stu.birth.day, stu.maths, stu.chinese);
    printf("%d %s %d-%d-%d %d %d\n", 
        p->id, p->name, p->birth.year, p->birth.month, p->birth.day, p->maths, p->chinese);
    printf("%d %s %d-%d-%d %d %d\n", 
        stu1.id, stu1.name, stu1.birth.year, stu1.birth.month, stu1.birth.day, stu1.maths, stu1.chinese);

    printf("\n");
    for(int i = 0; i < 2; i++)
    {
        printf("%d %s %d-%d-%d %d %d\n", 
            arr[i].id, arr[i].name, arr[i].birth.year, arr[i].birth.month, arr[i].birth.day, (arr+i)->maths, (arr+i)->chinese);
    }

    #if 1
    a.i = 112233;
    printf("a.i = %d\na.f = %f\na.ch = %c\n", a.i, a.f, a.ch);

    printf("size of struct simple_st = %lu\n", sizeof(struct simple_st));
    printf("size of struct student_st = %lu\n", sizeof(struct student_st));
    printf("size of p = %lu\n", sizeof(p));
    printf("size of arr = %lu\n", sizeof(arr));
    printf("size of arr2 = %lu\n", sizeof(arr2));
    #endif


    #endif

    exit(0);
}