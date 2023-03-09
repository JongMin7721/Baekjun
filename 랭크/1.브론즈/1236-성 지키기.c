#include <stdio.h>

int ccheck(int castle[50][50], int N, int M);

int main(void)
{
    int N, M, castle[50][50], max;
    char P;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %c", &P);
            if (P == '.')
            {
                castle[i][j] = 0;
            }
            else if (P == 'X')
            {
                castle[i][j] = 1;
            }
        }
    }

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < M; j++)
    //     {
    //         printf("%d", castle[i][j]);
    //     }
    //     printf("\n");
    // }

    max = ccheck(castle, N, M);

    printf("%d\n", max);

    return 0;
}

int ccheck(int castle[50][50], int N, int M)
{
    int cnt = 0, nn, mm;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (castle[i][j])
            {
                cnt++;
                break;
            }
        }
    }

    nn = N - cnt;
    cnt = 0;

    for (int j = 0; j < M; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (castle[i][j])
            {
                cnt++;
                break;
            }
        }
    }

    mm = M - cnt;

    return nn > mm ? nn : mm;
}