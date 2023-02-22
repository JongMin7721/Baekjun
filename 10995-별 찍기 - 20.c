#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    if (N == 1)
    {
        printf("*\n");

        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N * 2; j++)
        {
            if ((i + j) % 2 == 0)
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

    return 0;
}