#include <stdio.h>
#include <stdlib.h>

int arr[1000000];
int arr2[1000000];

int static compare(const void *first, const void *second);

int main(void) // 시간초과
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
        arr2[i] = arr[i];
    }

    qsort(arr, n, sizeof(int), compare);

    // 중복값 제거
    int nn = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[nn - 1])
        {
            arr[nn++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int start = 0, end = nn, mid = (start + end) / 2;

        while (arr2[i] != arr[mid])
        {
            if (arr2[i] > arr[mid])
            {
                start = mid;
            }
            else if (arr2[i] < arr[mid])
            {
                end = mid;
            }

            mid = (start + end) / 2;
        }

        printf("%d ", mid);
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