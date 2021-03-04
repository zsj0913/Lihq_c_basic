#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

extern int i;
//int i;

void func()
{
    printf("[%s]: i = %d\n", __FUNCTION__, i);

    exit(0);
}