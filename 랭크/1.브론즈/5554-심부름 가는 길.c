#include <stdio.h>

int main(void)
{
    int a, b, c, d, sec;

    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);

    sec = a + b + c + d;

    printf("%d\n%d\n", sec / 60, sec % 60);

    return 0;
}