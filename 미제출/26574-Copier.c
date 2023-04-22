#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);

        printf("%d %d\n", m, m);
    }

    return 0;
}