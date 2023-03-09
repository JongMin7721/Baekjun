#include <stdio.h>

void eratos(int n);

int nums[1000001];

int main(void) // 1929번
{
    int n, m;

    scanf("%d %d", &m, &n);
    eratos(n);

    if (m <= 1)
    {
        m = 2;
    }

    for (int i = m; i <= n; i++)
    {
        if (!nums[i])
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

void eratos(int n)
{
    if (n <= 1)
    {
        return;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (!nums[i])
        {
            for (long int j = i * i; j <= n; j += i)
            {
                nums[j] = 1;
            }
        }
    }

    return;
}