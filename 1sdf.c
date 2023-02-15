#include <stdio.h>

typedef long long int ll;

ll arr[31];

ll comb(int N, int M)
{
    ll up = 1, down = 1;
    for (int i = 1; i <= N; i++)
    {
        down *= i;
    }

    for (int i = N + 1; i <= M; i++)
    {
        up *= i;
    }
    printf("%lld %lld", up, down);
    return up / down;
}

int main(void)
{
    int T, N, M;
    ll combie;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);

        if (N == 0 || M == 0)
        {
            printf("0\n");
            continue;
        }

        printf("%lld\n", comb(N, M));
    }
}