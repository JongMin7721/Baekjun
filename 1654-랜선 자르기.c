#include <stdio.h>
#define INT_MAX 2147483647

int main(void)
{
    long K, N, cables[10000] = {0}, cnt, min = INT_MAX, max = 0;

    scanf("%d %d", &K, &N);

    for (int i = 0; i < K; i++)
    {
        scanf("%d", &cables[i]);
        if (min > cables[i])
        {
            min = cables[i];
        }
        else
        {
            max = cables[i];
        }
    }

    if (K == N)
    {
        printf("%d\n", min);
    }

    while (1)
    {
        max--;

        cnt = 0;
        for (int i = 0; i < K; i++)
        {
            cnt += (cables[i] / max);
        }

        if (N == cnt)
        {
            break;
        }
    }

    printf("%d\n", max);
}