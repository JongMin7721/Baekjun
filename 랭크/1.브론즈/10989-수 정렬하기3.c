#include <stdio.h>
#include <stdlib.h>

int main(void) // 10989번
{
    int n, m, ar[10001] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        ar[m - 1]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        if (ar[i])
        {
            for (int j = 0; j < ar[i]; j++)
            {
                printf("%d\n", i + 1);
            }
        }
    }

    return 0;
}
