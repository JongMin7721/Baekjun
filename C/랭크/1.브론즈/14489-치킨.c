#include <stdio.h>

int main(void)
{
    int n, m, l, o, p;

    scanf("%d %d\n%d", &n, &m, &l);

    if (n + m >= 2 * l)
    {
        printf("%d\n", n + m - 2 * l);
    }
    else
    {
        printf("%d\n", n + m);
    }

    return 0;
}