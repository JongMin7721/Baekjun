#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    while (n && m)
    {
        printf("%d\n", n + m);
        scanf("%d %d", &n, &m);
    }

    return 0;
}