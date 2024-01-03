#include <stdio.h>

void turn(int basket[100], int b1, int b2, int mid);

int main(void)
{
    int N, M, basket[100], b1, b2, mid;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        basket[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d", &b1, &b2, &mid);
        turn(basket, b1 - 1, b2 - 1, mid - 1);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", basket[i] + 1);
    }
    printf("\n");

    return 0;
}

void turn(int basket[100], int b1, int b2, int mid)
{
    int bas[100] = {0};

    for (int i = 0; i <= b2 - b1; i++)
    {
        if (mid + i <= b2)
        {
            bas[b1 + i] = basket[mid + i];
        }
        else
        {
            bas[b1 + i] = basket[b1 - b2 + i + mid - 1];
        }
    }

    for (int i = b1; i <= b2; i++)
    {
        basket[i] = bas[i];
    }

    return;
}