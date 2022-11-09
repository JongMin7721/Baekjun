#include <stdio.h>

int main(void)
{
    int n, m, ar1[100][100], ar2[100][100], result[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &ar1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &ar2[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", ar1[i][j] + ar2[i][j]);
        }
        printf("\n");
    }

    return 0;
}