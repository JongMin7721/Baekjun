#include <stdio.h>

int main(void) // 4673번
{
    int n[10000] = {0}, sum;

    for (int i = 1; i < 10000; i++)
    {
        sum = i + i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000);

        if (sum >= 10000)
        {
            continue;
        }

        n[sum] = 1;
    }

    for (int i = 1; i < 10000; i++)
    {
        if (n[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}