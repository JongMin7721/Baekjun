#include <stdio.h>

int main(void)
{
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    int small1 = x > y ? y : x, small2 = w - x > h - y ? h - y : w - x;

    printf("%d\n", small1 > small2 ? small2 : small1);

    return 0;
}