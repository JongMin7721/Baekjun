#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n > m)
    {
        printf("1\n");
    }
    else if (n < m)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}