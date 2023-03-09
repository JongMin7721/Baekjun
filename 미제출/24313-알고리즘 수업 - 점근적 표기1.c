#include <stdio.h>

int main(void)
{
    int a1, a2, c, n0;

    scanf("%d %d\n%d\n%d", &a1, &a2, &c, &n0);

    if (a1 * n0 + a2 <= c * n0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}