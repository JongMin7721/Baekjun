#include <stdio.h>

int main(void)
{
    int n, y = 0, m = 0, time, best;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &time);
        y += (time / 30 + 1) * 10;
        m += (time / 60 + 1) * 15;
    }

    if (y > m)
    {
        printf("M %d\n", m);
    }
    else if (m > y)
    {
        printf("Y %d\n", y);
    }
    else
    {
        printf("Y M %d\n", y);
    }

    return 0;
}