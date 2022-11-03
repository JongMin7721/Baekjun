#include <stdio.h>

int main(void)
{
    int N, v, num[100], total = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &num[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < N; i++)
    {
        if (num[i] == v)
        {
            total++;
        }
    }
    printf("%d", total);

    return 0;
}