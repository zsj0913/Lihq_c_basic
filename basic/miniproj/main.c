#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

static int i = 10;

int main()
{
    printf("[%s]: i = %d\n", __FUNCTION__, i);
    //func();
    call_func();

    exit(0);
}