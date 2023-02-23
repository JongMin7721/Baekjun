#include <stdio.h>
#define SWAP(X, Y, T) (T) = (X), (X) = (Y), (Y) = (T)

int main(void)
{
    int basket[100], N, M, b1, b2, tmp;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        basket[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &b1, &b2);
        SWAP(basket[b1 - 1], basket[b2 - 1], tmp);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", basket[i]);
    }
}