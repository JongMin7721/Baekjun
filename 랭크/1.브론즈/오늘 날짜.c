#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm *t;

    time_t now_tm = time(NULL);
    t = localtime(&now_tm);

    printf("%04d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    return 0;
}