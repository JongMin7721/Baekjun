#include <stdio.h>

int main(void)
{
    int i, n, m, cnt = 0;
    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }

        if (cnt == m)
        {
            break;
        }
    }

    if (cnt != m)
    {
        i = 0;
    }

    printf("%d\n", i);

    return 0;
}