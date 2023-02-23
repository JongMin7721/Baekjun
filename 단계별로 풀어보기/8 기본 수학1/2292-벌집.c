#include <stdio.h>
#define SIX 6

int main(void) // 2292번
{
    int n, i, total = 0;

    scanf("%d", &n);

    for (i = 1; total < n - 1; i++)
    {
        total += (i * SIX);
    }

    printf("%d\n", i);

    return 0;
}