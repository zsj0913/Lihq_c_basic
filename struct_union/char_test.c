#include <stdio.h>
#include <stdlib.h>

//测试当前机器环境char类型有无符号

int main()
{
    printf("Type of char is %ssigned char!\n", (char)(-1) > 0 ? "un" : "");

    exit(0);
}