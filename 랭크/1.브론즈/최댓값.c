#include <stdio.h>

int main(void)
{
    int arr[9][9], max = 0, max_i = 0, max_j = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf(" %d", &arr[i][j]);

            if (arr[i][j] > max)
            {
                max_i = i;
                max_j = j;
                max = arr[i][j];
            }
        }
    }

    printf("%d\n%d %d", max, max_i + 1, max_j + 1);

    return 0;
}