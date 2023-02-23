#include <stdio.h>

int main(void)
{
    int K, P, M, k;

    scanf("%d", &K);

    for (int i = 0; i < K; i++)
    {
        int seat[500] = {0}, cnt = 0;
        scanf("%d %d", &P, &M);

        for (int j = 0; j < P; j++)
        {
            scanf("%d", &k);
            if (seat[k] == 0)
            {
                seat[k]++;
            }
            else
            {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}