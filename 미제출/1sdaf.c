#include <stdio.h>

void prt(int i, int j, int N)
{
}

int main(void)
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}