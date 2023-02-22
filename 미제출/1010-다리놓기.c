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

/*
\  1  2  3  4  5  6  7
1  1  2  3  4  5  6  7
2     1  3  6  10 15 21
3        1  4  10 20 35
4           1  5  15 35
5              1  6  21
6                 1  7
7                    1
*/