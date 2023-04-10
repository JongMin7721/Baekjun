#include <stdio.h>

void SWAP(int *a, int *b);

int main(void)
{
    int A[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (A[i] >= A[j])
            {
                SWAP(&A[i], &A[j]);
            }
        }
    }

    printf("%d\n", A[1]);

    return 0;
}

void SWAP(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

    return;
}