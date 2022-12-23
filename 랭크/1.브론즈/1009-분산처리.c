#include <stdio.h>

int main(void) // 1009번
{
    int n, m, l, result, cnt;
    scanf("%d", &n);

    while (n--)
    {
        result = 1;
        cnt = 0;
        scanf("%d %d", &m, &l);
        for (int i = 1; i <= l; i++)
        {
            result = (result * m) % 10;
            cnt++;
            if (result == m)
            {
                while (cnt > l)
                {
                    l -= cnt;
                }
            }
        }

        if (!result)
        {
            result = 10;
        }

        printf("%d\n", result);
    }

    return 0;
}