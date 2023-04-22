#include <stdio.h>

int main(void)
{
    int n, m, l;

    scanf("%d %d %d", &n, &m, &l);

    printf("%d\n", m / n * l * 3);

    return 0;
}