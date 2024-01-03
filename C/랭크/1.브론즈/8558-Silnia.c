#include <stdio.h>

int main(void)
{
    int n, res = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        res *= i;
        res %= 10;
    }

    printf("%d\n", res);

    return 0;
}