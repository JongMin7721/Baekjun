#include <stdio.h>

int check(long mid, long cables[10000], long K, long N);

int main(void)
{
    long K, N, cables[10000] = {0}, start = 0, end = 0, mid;

    scanf("%ld %ld", &K, &N);

    for (int i = 0; i < K; i++)
    {
        scanf("%ld", &cables[i]);
        if (end < cables[i])
        {
            end = cables[i];
        }
    }

    while (start + 1 < end)
    {
        mid = (start + end) / 2;

        if (check(mid, cables, K, N))
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }

    printf("%ld\n", start);

    return 0;
}

int check(long mid, long cables[10000], long K, long N)
{
    int cab = 0;

    for (int i = 0; i < K; i++)
    {
        cab += cables[i] / mid;
    }

    if (cab >= N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}