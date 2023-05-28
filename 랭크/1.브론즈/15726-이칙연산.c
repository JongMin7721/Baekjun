#include <stdio.h>

int main(void)
{
    unsigned long long int a, b, c;

    scanf("%llu %llu %llu", &a, &b, &c);

    if (b > c)
    {
        printf("%llu\n", (a * b / c));
    }
    else
    {
        printf("%llu\n", (a * c / b));
    }

    return 0;
}