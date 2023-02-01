#include <stdio.h>
#include <stdlib.h>

int arr1[500000], answer[500000];

int static compare(const void *first, const void *second);
int BS(int arr1[], int key, int n);

int main(void)
{
    int n, m, num;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr1[i]);
    }

    qsort(arr1, n, sizeof(arr1[0]), compare);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num);
        answer[i] = BS(arr1, num, n);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d ", answer[i]);
    }
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

int BS(int arr1[], int key, int n)
{
    int start = 0, end = n, mid = end / 2, count = 1;

    while (arr1[mid] != key)
    {
        if (mid == start)
        {
            return 0;
        }

        if (arr1[mid] < key)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }

        mid = (start + end) / 2;
    }

    while (arr1[mid - 1] == arr1[mid])
    {
        mid--;
    }

    while (arr1[mid] == arr1[mid + 1])
    {
        mid++;
        count++;
    }

    return count;
}