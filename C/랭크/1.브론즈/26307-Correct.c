#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    m += (n - 9) * 60;

    printf("%d\n", m);

    return 0;
}