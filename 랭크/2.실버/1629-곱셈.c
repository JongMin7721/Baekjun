#include <stdio.h>

int main(void)
{
    unsigned long long int pow = 1, a, b, c;

    scanf("%llu %llu %llu", &a, &b, &c);

    if (b == 1)
    {
        printf("%lu\n", a % c);

        return 0;
    }

    for (; b != 1; b /= 2)
    {
        if (b % 2)
        {
            pow *= a;
        }

        a *= a;
        a %= c;
        pow %= c;
        // printf("a:%llu b:%llu c:%llu pow:%llu\n", a, b, c, pow);
    }

    pow *= a;

    printf("%llu\n", pow % c);
}