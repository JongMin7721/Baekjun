#include <stdio.h>

void colpa(int ar[][100], int n, int m);
int printpa(int ar[][100]);

int main(void) // 2563번
{
    int ar[100][100] = {0}, t, n, m;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &n, &m);
        colpa(ar, n, m);
    }

    printf("%d\n", printpa(ar));

    return 0;
}

void colpa(int ar[][100], int n, int m)
{
    int setn = n + 10 > 100 ? 100 : n + 10;
    int setm = m + 10 > 100 ? 100 : m + 10;
    for (int i = n; i < setn; i++)
    {
        for (int j = m; j < setm; j++)
        {
            if (!ar[i][j])
            {
                ar[i][j] = 1;
            }
        }
    }
}

int printpa(int ar[][100])
{
    int set = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (ar[i][j])
            {
                set++;
            }
        }
    }

    return set;
}