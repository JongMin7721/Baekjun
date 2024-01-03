#include <stdio.h>

int main(void)
{
    int sum = 0, score;

    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", &score);
        sum += score >= 40 ? score : 40;
    }

    printf("%d\n", sum / 5);

    return 0;
}