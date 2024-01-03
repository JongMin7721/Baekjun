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
        if (answer[i])
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
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

int BS(int arr1[], int key, int n)
{
    int start = 0, end = n, mid = end / 2, cnt1, cnt2;

    while (1)
    {
        if (mid == end)
        {
            break;
        }

        if (arr1[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = (start + end) / 2;
    }

    if (arr1[mid] != key)
    {
        return 0;
    }

    cnt1 = mid;

    start = 0, end = n, mid = end / 2;

    while (1)
    {
        if (mid == end)
        {
            break;
        }

        if (arr1[mid] <= key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = (start + end) / 2;
    }

    cnt2 = mid;

    return cnt2 - cnt1;
}