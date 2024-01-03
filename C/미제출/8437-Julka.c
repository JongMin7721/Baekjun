#include <stdio.h>

int main(void) // 10^100 까지 계산
{
    int n, m;

    scanf("%d\n%d", &n, &m);

    printf("%d\n%d\n", (n + m) / 2, (n - m) / 2);

    return 0;
}