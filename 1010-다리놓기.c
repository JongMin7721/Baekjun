#include <stdio.h>

typedef long long int ll;

ll arr[31][31];

ll comb();

int main(void)
{
    int T, N, M;
    ll combie;

    comb();

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);

        printf("%lld\n", arr[M][N]);
    }
}

ll comb()
{
    for (int i = 1; i <= 30; i++)
    {
        arr[i][i] = 1;
        for (int j = i + 1; j <= 30; j++)
        {
            arr[j][i] = arr[j - 1][i] * j / (j - i);
        }
    }
}