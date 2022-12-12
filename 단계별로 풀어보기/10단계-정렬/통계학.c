#include <stdio.h>
#include <stdlib.h>

int ar[500000];
int compare(const void *a, const void *b);

int main(void)
{
    int n, max_index = 0, first_max_index = 1000000, second_max_index = 1000000, cnt[8001] = {0}, max_cnt = 1;
    double sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        cnt[ar[i] + 4000]++;
        sum += ar[i];
    }

    qsort(ar, n, sizeof(int), compare);

    for (int i = 8000; i >= 0; i--)
    {
        if (cnt[i])
        {
            if (max_cnt == cnt[i])
            {
                max_index = i - 4000;
                second_max_index = first_max_index;
                first_max_index = max_index;
            }
            else if (max_cnt < cnt[i])
            {
                max_cnt = cnt[i];
                max_index = i - 4000;
                second_max_index = 1000000;
                first_max_index = max_index;
            }
        }
    }

    if (second_max_index == 1000000)
    {
        second_max_index = first_max_index;
    }

    sum /= (double)n;
    sum = sum >= -0.5 && sum < 0.5 ? 0 : sum;

    printf("%.0lf\n%d\n%d\n%d\n", sum, ar[n / 2], second_max_index, ar[0] - ar[n - 1]);

    return 0;
}

int compare(const void *a, const void *b)
{
    const int *x = (int *)a;
    const int *y = (int *)b;

    if (*x < *y)
        return 1;
    else if (*x > *y)
        return -1;

    return 0;
}