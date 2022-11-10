#include <stdio.h>

int main(void) // 2439번
{
    int a, j;

    scanf("%d", &a);

    for (int i = a; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        for (; j < a; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}