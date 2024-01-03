#include <stdio.h>

int main(void)
{
    int N, M;

    scanf("%d %d", &N, &M);

    while (N != 0 && M != 0)
    {
        if (N % M == 0)
        {
            printf("multiple\n");
        }
        else if (M % N == 0)
        {
            printf("factor\n");
        }
        else
        {
            printf("neither\n");
        }

        scanf("%d %d", &N, &M);
    }

    return 0;
}