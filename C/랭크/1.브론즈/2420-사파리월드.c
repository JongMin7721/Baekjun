#include <stdio.h>

int main(void) // 2420번
{
    long long int n, m;

    scanf("%lld %lld", &n, &m);

    n = n - m > 0 ? n - m : m - n;

    printf("%lld\n", n);

    return 0;
}