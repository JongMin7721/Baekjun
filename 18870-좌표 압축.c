#include <stdio.h>
#include <stdlib.h>

int arr[1000000];
int arr2[1000000];

int static compare(const void *first, const void *second);

int main(void)
{
    int n, cnt;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
        arr2[i] = arr[i];
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr2[i])
            {
                printf("%d ", cnt);
                break;
            }
            if (arr[j] != arr[j + 1])
            {
                cnt++;
            }
        }
    }

    return 0;
}

int static compare(const void *first, const void *second)
{
    if (*(int *)first > *(int *)second)
        return 1;
    else if (*(int *)first < *(int *)second)
        return -1;
    else
        return 0;
}