#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i += 60)
    {
        printf("All positions change in year %d\n", i);
    }

    return 0;
}