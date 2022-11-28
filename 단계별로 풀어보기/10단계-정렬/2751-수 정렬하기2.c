#include <stdio.h>

int ar[2000001] = {0};

int main(void) // 2751번
{
    int n, m;

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
            ar[m + 1000000]++;
        }
    }
    for (int i = 1000000; i >= 1; i--)
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

    for (int i = 1000001; i < 2000001; i++)
    {
        if (ar[i])
        {
            printf("%d\n", i - 1000000);
        }
    }

    return 0;
}