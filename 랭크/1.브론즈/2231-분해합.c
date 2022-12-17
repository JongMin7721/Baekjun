#include <stdio.h>

int main(void)
{
    int n, k, l, sum, j, check = 0;
    scanf("%d", &n);

    for (j = 0; j <= n; j++)
    {
        k = j;
        sum = j;
        for (int i = 0; i < k; k /= 10)
        {
            sum += k % 10;
        }

        if (sum == n)
        {
            printf("%d\n", j);
            check = 1;
            break;
        }
    }

    if (!check)
    {
        printf("0\n");
    }

    return 0;
}