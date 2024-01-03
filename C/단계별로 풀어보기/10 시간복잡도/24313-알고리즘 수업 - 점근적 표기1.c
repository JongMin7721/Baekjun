#include <stdio.h>

int main(void)
{
    int a1, a2, c, n0;

    scanf("%d %d\n%d\n%d", &a1, &a2, &c, &n0);

    for (int i = n0; i <= 100; i++)
    {
        if (a1 * i + a2 <= c * i)
        {
            continue;
        }
        else
        {
            printf("0\n");

            return 0;
        }
    }

    printf("1\n");

    return 0;
}