#include <stdio.h>

int main(void)
{
    int a, b, c, m, time, CW = 0, fat = 0;

    scanf("%d %d %d %d", &a, &b, &c, &m);

    if (a > m)
    {
        printf("0\n");
        return 0;
    }

    for (time = 0; time < 24; time++)
    {
        if (fat + a > m)
        {
            if (fat - c < 0)
            {
                fat = 0;
            }
            else
            {
                fat -= c;
            }

            continue;
        }

        CW += b;
        fat += a;
    }

    printf("%d\n", CW);

    return 0;
}