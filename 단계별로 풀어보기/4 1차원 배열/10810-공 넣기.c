#include <stdio.h>

int main(void)
{
    int N, M, arr[100] = {0}, x1, x2, bn;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d", &x1, &x2, &bn);
        for (int i = x1 - 1; i < x2; i++)
        {
            arr[i] = bn;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}