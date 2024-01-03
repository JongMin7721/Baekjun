#include <stdio.h>

int main(void)
{
    typedef long long int ll;

    ll a, b;

    scanf("%lld %lld", &a, &b);

    printf("%lld\n", (a + b) * (a - b));

    return 0;
}