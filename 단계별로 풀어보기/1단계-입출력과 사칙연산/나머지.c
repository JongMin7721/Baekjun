#include <stdio.h>

int main(void) // 3052번
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n%d\n%d\n%d", (a + b) % c, ((a % c) + (b % c)) % c, (a * b) % c, ((a % c) * (b % c)) % c);

    return 0;
}