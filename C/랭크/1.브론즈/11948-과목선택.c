#include <stdio.h>

int main(void)
{
    int score, low = 101, total = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &score);

        if (score < low)
        {
            low = score;
        }

        total += score;
    }

    total -= low;

    int num1, num2;

    scanf("%d\n%d", &num1, &num2);

    if (num1 >= num2)
    {
        total += num1;
    }
    else
    {
        total += num2;
    }

    printf("%d\n", total);

    return 0;
}