#include <stdio.h>

int WBcheck(int ar[50][50], int ii, int jj);
// void pr(int ar[50][50], int n, int m);    //출력 확인용 코드

int main(void) // 1018번
{
    int ar[50][50], n, m, min_err = 2501, err;
    char word;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &word);
            ar[i][j] = (int)word == 'W' ? 1 : 0;
        }
    }

    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            err = WBcheck(ar, i, j);
            min_err = min_err > err ? err : min_err;
        }
    }

    printf("%d\n", min_err);

    return 0;
}

int WBcheck(int ar[50][50], int ii, int jj)
{
    int err1 = 0, err2 = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == ar[ii + i][jj + j])
            {
                err1++;
            }
            if ((i + j) % 2 != ar[ii + i][jj + j])
            {
                err2++;
            }
        }
    }

    return err1 > err2 ? err2 : err1;
}

// void pr(int ar[50][50], int n, int m) //출력 확인용 코드
// {
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d", ar[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }