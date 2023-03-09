#include <stdio.h>

void prt(int i, int j, int N)
{
    if (N == 1)
    {
        printf("*");
        return;
    }

    if ((i / (N / 3)) % 3 == 1 && (j / (N / 3)) % 3 == 1)
    {
        printf(" ");
    }
    else
    {
        prt(i, j, N / 3);
    }

    return;
}

int main(void)
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            prt(i, j, N);
        }
        printf("\n");
    }

    return 0;
}