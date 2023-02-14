#include <stdio.h>

long pew(int N);
void hanoi(int N, int start, int end, int mid);

int main(void)
{
    int N;

    scanf("%d", &N);

    printf("%ld\n", pew(N));

    hanoi(N, 1, 3, 2);
}

long pew(int N)
{
    long num = 1;
    for (int i = 0; i < N; i++)
    {
        num *= 2;
    }

    return num - 1;
}

void hanoi(int N, int start, int end, int mid)
{
    if (N == 1)
    {
        printf("%d %d\n", start, end);
        return;
    }

    hanoi(N - 1, start, mid, end);
    printf("%d %d\n", start, end);
    hanoi(N - 1, mid, end, start);

    return;
}