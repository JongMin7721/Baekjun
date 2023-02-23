#include <stdio.h>
#define MAX_SIZE 500000

int main(void)
{
    int n, cards[MAX_SIZE], front, rear;

    scanf("%d", &n);

    if (n == 1)
    {
        printf("1\n");

        return 0;
    }

    front = 0;
    rear = n;

    for (int i = 0; i < n; i++)
    {
        cards[i] = i;
    }

    while (1)
    {
        front = (front + 1) % MAX_SIZE;
        n--;
        if (n == 1)
        {
            printf("%d\n", cards[front] + 1);
            return 0;
        }

        rear = rear % MAX_SIZE;
        cards[rear++] = cards[front];
        front = (front + 1) % MAX_SIZE;
    }

    printf("%d\n", cards[front] + 1);

    return 0;
}