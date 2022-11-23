#include <stdio.h>

int main(void) // 11653번
{
    int n, i;
    scanf("%d", &n);

    if (n == 1)
    {
        return 0;
    }

    while (n != 1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                n /= i;
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}