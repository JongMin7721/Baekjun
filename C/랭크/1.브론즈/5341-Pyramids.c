#include <stdio.h>

int main(void)
{
    int N, sum;

    scanf("%d", &N);

    while (N != 0)
    {
        sum = 0;
        for (int i = 1; i <= N; i++)
        {
            sum += i;
        }

        printf("%d\n", sum);

        scanf("%d", &N);
    }

    return 0;
}