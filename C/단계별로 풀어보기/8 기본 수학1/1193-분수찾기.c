#include <stdio.h>

int main(void) // 1193번
{
    int n, check = 0, i;

    scanf("%d", &n);

    for (i = 0; check < n; i++)
    {
        check += i;
    }

    n = check - n + 1;

    if (i % 2 != 0)
    {
        printf("%d/%d\n", i - n, n);
    }
    else
    {
        printf("%d/%d\n", n, i - n);
    }

    return 0;
}