#include <stdio.h>

int main(void) // 2750번
{
    int ar[2001] = {0}, n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m == 0)
        {
            ar[0]++;
        }
        else if (m < 0)
        {
            ar[-m]++;
        }
        else
        {
            ar[m + 1000]++;
        }
    }
    for (int i = 1000; i >= 1; i--)
    {
        if (ar[i])
        {
            printf("%d\n", -i);
        }
    }

    if (ar[0])
    {
        printf("0\n");
    }

    for (int i = 1001; i < 2001; i++)
    {
        if (ar[i])
        {
            printf("%d\n", i - 1000);
        }
    }

    return 0;
}