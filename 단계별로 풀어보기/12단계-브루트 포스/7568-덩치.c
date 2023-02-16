#include <stdio.h>

typedef struct hw
{
    int h, w, rank;
} hw;

void rnk(hw *arr, int n);

int main(void)
{
    hw arr[50] = {0, 0, 0};
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].w, &arr[i].h);
    }

    rnk(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i].rank + 1);
    }

    return 0;
}

void rnk(hw *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i].w - arr[j].w < 0 && arr[i].h - arr[j].h < 0)
            {
                arr[i].rank++;
            }
        }
    }

    return;
}