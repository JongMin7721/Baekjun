#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i < n * 2; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (i <= n)
            {
                if (j < i || j >= n * 2 - i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (j >= i || j <= n * 2 - 1 - i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}