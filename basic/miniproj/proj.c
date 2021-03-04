#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

static int i = 100;

void call_func()
{
    func();
}

static void func()
{
    printf("[%s]: i = %d\n", __FUNCTION__, i);

    exit(0);
}