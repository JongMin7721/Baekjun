#include <stdio.h>

int main(void)
{
    int T, n, k, d, a;
    long kda[100][3] = {0}, money, result;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);

        result = 0;

        for (int j = 0; j < n; j++)
        {
            scanf(" %ld %ld %ld", &kda[j][0], &kda[j][1], &kda[j][2]);
        }

        scanf("%d %d %d", &k, &d, &a);

        for (int j = 0; j < n; j++)
        {
            money = (kda[j][0] * k - kda[j][1] * d + kda[j][2] * a);

            if (money >= 0)
            {
                result += money;
            }
        }

        printf("%ld\n", result);
    }

    return 0;
}