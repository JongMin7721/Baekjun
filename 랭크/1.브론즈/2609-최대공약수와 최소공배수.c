#include <stdio.h>

int main(void)
{
    int n, m, sn, same[10001] = {0}, best;
    scanf("%d %d", &n, &m);
    sn = n <= m ? n : m;

    for (int i = 1; i <= sn; i++)
    {
        if (n % i == 0)
        {
            same[i]++;
        }

        if (m % i == 0)
        {
            same[i]++;
        }

        if (same[i] == 2)
        {
            best = i;
        }
    }

    printf("%d\n%d", best, n * m / best);
}