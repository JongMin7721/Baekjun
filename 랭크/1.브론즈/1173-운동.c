#include <stdio.h>

int main(void)
{
    int N, m, M, T, R, exer = 0, time = 0, now_m;

    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

    if (m + T > M)
    {
        printf("-1\n");
        return 0;
    }

    now_m = m;

    while (exer < N)
    {
        time++;

        if (now_m + T <= M)
        {
            now_m += T;
            exer++;
        }
        else
        {
            now_m -= R;
            if (now_m < m)
            {
                now_m = m;
            }
        }
    }

    printf("%d\n", time);

    return 0;
}