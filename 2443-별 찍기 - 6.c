#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (n - i > j)
            {
                printf(" ");
            }
            else if (j <= n + i)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}