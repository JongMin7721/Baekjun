#include <stdio.h>

int main(void)
{
    int A = 0, B = 0, C = 0, T;

    scanf("%d", &T);

    if (T >= 300)
    {
        A = T / 300;
        T %= 300;
    }

    if (T >= 60)
    {
        B = T / 60;
        T %= 60;
    }

    if (T >= 10)
    {
        C = T / 10;
        T %= 10;
    }

    if (T % 10)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d %d %d\n", A, B, C);
    }

    return 0;
}