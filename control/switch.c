#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;

    ch = getchar();
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("ant: a small insect that lives in group\n");
            break;
        case 'b':
        case 'B':
            printf("butterfly: a flying insect with a long thin body\n");
            break;
        case 'c':
        case 'C':
            printf("cobra: a highly dangerous snake\n");
            break;
        case 'd':
        case 'D':
            printf("donkey: an animal with short legs and long ears\n");
            break;
        default:
            printf("can not find animal\n");
            break;
    }

    #if 0
    int score;

    printf("please enter score[0,100]: \n");
    scanf("%d", &score);

    if(score < 0 || score > 100)
    {
        fprintf(stderr, "input error\n");
        exit(1);
    }

    switch (score / 10)
    {
    case 10:
    case 9: puts("A"); break;
    case 8: puts("B"); break;
    case 7: puts("C"); break;
    case 6: puts("D"); break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: puts("E"); break;
    default:
        break;
    }
    #endif

    exit(0);
}