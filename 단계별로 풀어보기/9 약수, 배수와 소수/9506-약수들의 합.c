#include <stdio.h>

int check_perfect(int N);
void sum(int N);

int main(void)
{

    int N;

    scanf("%d", &N);

    while (N != -1)
    {
        if (check_perfect(N))
        {
            sum(N);
        }
        else
        {
            printf("%d is NOT perfect.\n", N);
        }

        scanf("%d", &N);
    }

    return 0;
}

int check_perfect(int N)
{
    int sum = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }

    if (sum == N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void sum(int N)
{
    printf("%d = 1", N);
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            printf(" + %d", i);
        }
    }

    printf("\n");

    return;
}