#include <stdio.h>

int main(void) // 2775번
{
    int t, n, k, j, l, res;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int ar[15][15] = {0};

        scanf("%d\n%d", &k, &n);

        for (j = 0; j < k + 1; j++)
        {
            for (l = 0; l < n; l++)
            {
                if (l == 0)
                {
                    ar[j][0] = 1;
                }
                else if (j == 0)
                {
                    ar[0][l] = l + 1;
                }
                else
                {
                    ar[j][l] = ar[j][l - 1] + ar[j - 1][l];
                }

                res = ar[j][l];
            }
        }

        printf("%d\n", res);
    }

    return 0;
}