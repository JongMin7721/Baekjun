#include <stdio.h>

int main(void)
{
    int N, M, castle[50][50];
    char P;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %c", &P);
            if (P == '.' && castle[i][j] != 1)
            {
                castle[i][j] = 0;
            }
            else if (P == 'X')
            {
                castle[i][j] = 1;
                for (int k = 0; k < N; k++)
                {
                    if (castle[k][j] != 1)
                    {
                        castle[k][j] = 1;
                    }
                }

                for (int k = 0; k < M; k++)
                {
                    if (castle[i][k] != 1)
                    {
                        castle[i][k] = 1;
                    }
                }
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

    int max = 0, cnt;
    for (int i = 0; i < N; i++)
    {
        cnt = 0;
        for (int j = 0; j < M; j++)
        {
            if (!castle[i][j])
            {
                cnt++;
            }
        }

        if (max < cnt)
        {
            max = cnt;
        }
    }

    for (int i = 0; i < M; i++)
    {
        cnt = 0;
        for (int j = 0; j < N; j++)
        {
            if (!castle[j][i])
            {
                cnt++;
            }
        }

        if (max < cnt)
        {
            max = cnt;
        }
    }

    printf("%d\n", max);

    return 0;
}