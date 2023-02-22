#include <stdio.h>

int main(void)
{
    int K, min = 101, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf(" %d", &K);

        if (K % 2 == 1)
        {
            if (min > K)
            {
                min = K;
            }

            sum += K;
        }
    }

    if (sum == 0)
    {
        printf("-1\n");

        return 0;
    }

    printf("%d\n%d\n", sum, min);

    return 0;
}