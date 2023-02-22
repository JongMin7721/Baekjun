#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n - i <= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}