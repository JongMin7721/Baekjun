#include <stdio.h>

int main(void) // 문자열 이용하여 풀기
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n%d", n / m, n % m);

    return 0;
}