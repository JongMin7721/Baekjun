#include <stdio.h>

int main(void)
{
    int n, dot = 2;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        dot = dot * 2 - 1;
    }

    printf("%d\n", dot * dot);

    return 0;
}