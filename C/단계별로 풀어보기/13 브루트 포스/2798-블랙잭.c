#include <stdio.h>

int BlackJack(int card[100], int n, int max);

int main(void)
{
    int n, max, card[100], result;

    scanf("%d %d", &n, &max);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &card[i]);
    }

    printf("%d\n", BlackJack(card, n, max));
}

int BlackJack(int card[100], int n, int max)
{
    int value, min = -1;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                value = card[i] + card[j] + card[k];
                if (value == max)
                {
                    return max;
                }
                else if (value < max)
                {
                    min = min < value ? value : min;
                }
            }
        }
    }

    return min;
}