#include <stdio.h>

int gcd(int A, int B);

int main(void)
{
    int T, A, B;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);

        printf("%d\n", A * B / gcd(A, B));
    }

    return 0;
}

int gcd(int A, int B)
{
    int tmp;
    while (B)
    {
        tmp = A % B;
        A = B;
        B = tmp;
    }

    return A;
}