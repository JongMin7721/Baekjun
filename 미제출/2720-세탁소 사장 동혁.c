#include <stdio.h>

int main(void)
{
    int T, money, mon[4];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &money);

        if (money / 25 >= 0)
        {
            mon[0] = money / 25;
            money %= 25;
        }

        if (money / 10 >= 0)
        {
            mon[1] = money / 10;
            money %= 10;
        }

        if (money / 5 >= 0)
        {
            mon[2] = money / 5;
            money %= 5;
        }

        mon[3] = money;

        for (int i = 0; i < 4; i++)
        {
            printf("%d ", mon[i]);
        }
        printf("\n");
    }

    return 0;
}