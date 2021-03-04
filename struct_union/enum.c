#include <stdio.h>
#include <stdlib.h>

enum day
{
    MON = 1,    //默认从0开始往下排
    TUS,
    WES,
    THR,
    FRI = 1,
    SAT,
    SUN
};

enum    //当作宏来使用
{
    STATE_RUNNING = 1,
    STATE_CANCELLED,
    STATE_OVER
};

struct job_st
{
    int id;
    int state;
    time_t start, end;
};

int main()
{
    struct job_st job1;

    job1.state = STATE_OVER;
    switch (job1.state)
    {
        case STATE_RUNNING:
            break;
        case STATE_CANCELLED:
            break;
        case STATE_OVER:
            break;
        
        default:
            break;
    }


    #if 0
    enum day a = SUN;

    a = TUS;
    printf("%d\n", a);
    #endif

    exit(0);
}