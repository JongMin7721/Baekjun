#include <stdio.h>

int main(void) // 2588번
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", a * (b % 10));
    printf("%d\n", a * ((b / 10) % 10));
    printf("%d\n", a * (b / 100));
    printf("%d", a * b);

    return 0;
}