#include <stdio.h>

int main(void)
{
    long long int n;

    scanf("%lld", &n);

    printf("%lld\n2\n", n * (n - 1) / 2);

    return 0;
}