#include <stdio.h>

typedef long long int ll;

int trees[1000000];
int chk_tree(ll mid, ll M, int N);

int main(void)
{
    int N;
    ll M, start = 0, mid, end = 0;

    scanf("%d %lld", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &trees[i]);
        if (trees[i] > end)
        {
            end = trees[i];
        }
    }

    while (start + 1 < end)
    {
        mid = (start + end) / 2;
        if (chk_tree(mid, M, N))
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }

    printf("%lld\n", start);

    return 0;
}

int chk_tree(ll mid, ll M, int N)
{
    ll ness = 0;
    for (int i = 0; i < N; i++)
    {
        if (trees[i] - mid > 0)
        {
            ness += trees[i] - mid;
        }
    }

    if (ness >= M)
    {
        return 1;
    }

    return 0;
}