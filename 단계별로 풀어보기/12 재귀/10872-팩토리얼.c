#include <stdio.h>

int main(void) // 10872번
{
    int n, set = 1;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("1\n");

        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        set *= i;
    }

    printf("%d\n", set);

    return 0;
}