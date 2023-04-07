#include <stdio.h>

int main(void)
{
    int K, D1, D2;
    double res;

    scanf("%d\n%d %d", &K, &D1, &D2);

    if (D1 == D2)
    {
        printf("%d\n", K * K);

        return 0;
    }

    res = (double)(D1 - D2) / 2;

    printf("%g", K * K - res * res);

    return 0;
}