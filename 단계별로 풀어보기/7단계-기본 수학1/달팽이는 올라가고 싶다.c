#include <stdio.h>

int main(void) // 2869번
{
    int a, b, v, result, p;

    scanf("%d %d %d", &a, &b, &v);

    p = ((v - a) % (a - b) == 0) ? 1 : 2;
    result = ((v - a) / (a - b)) + p;

    printf("%d\n", result);

    return 0;
}