#include <stdio.h>

int main(void)
{
    int num;
    long long int fac = 1;

    scanf("%d", &num);

    if (num == 0)
    {
        printf("1\n");

        return 0;
    }

    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }

    printf("%lld\n", fac);

    return 0;
}