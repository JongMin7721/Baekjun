#include <stdio.h>

int main(void)
{
    int N, M, basket[100], b1, b2, bas[100];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        basket[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &b1, &b2);

        if (b1 == b2)
        {
            continue;
        }

        for (int j = 0; j < b2 - b1 + 1; j++)
        {
            bas[b1 + j - 1] = basket[b2 - j - 1];
        }

        for (int j = b1 - 1; j < b2; j++)
        {
            basket[j] = bas[j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", basket[i] + 1);
    }
    printf("\n");

    return 0;
}