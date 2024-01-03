#include <stdio.h>

int compareMax(int max, int value);
int compareMin(int min, int value);

int main(void)
{
    int n, x, y, x_min = 10001, x_max = -10001, y_min = 10001, y_max = -10001;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        x_max = compareMax(x_max, x);
        x_min = compareMin(x_min, x);
        y_max = compareMax(y_max, y);
        y_min = compareMin(y_min, y);
    }

    printf("%d\n", (x_max - x_min) * (y_max - y_min));
}

int compareMax(int max, int value)
{
    if (max < value)
    {
        return value;
    }
    else
    {
        return max;
    }
}

int compareMin(int min, int value)
{
    if (min > value)
    {
        return value;
    }
    else
    {
        return min;
    }
}