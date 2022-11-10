#include <stdio.h>

int main(void) // 2525번
{
    int a, b, c;

    scanf("%d %d\n%d", &a, &b, &c);

    printf("%d %d", (a + ((b + c) / 60)) % 24, (b + c) % 60);

    return 0;
}