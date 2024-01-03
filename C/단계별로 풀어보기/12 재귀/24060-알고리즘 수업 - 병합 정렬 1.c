#include <stdio.h>

void merge_sort(int arr[], int st, int n);
void merge(int arr[], int start, int mid, int end);

int cnt, tmp[500000], m;

int main(void)
{
    int arr[500000], n;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    merge_sort(arr, 0, n - 1);

    if (m > cnt)
    {
        printf("-1\n");
    }

    return 0;
}

void merge_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, t = 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            tmp[t++] = arr[i++];
        }
        else
        {
            tmp[t++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        tmp[t++] = arr[i++];
    }

    while (j <= end)
    {
        tmp[t++] = arr[j++];
    }

    i = start, t = 1;

    while (i <= end)
    {
        arr[i++] = tmp[t++];
        cnt++;
        if (m == cnt)
        {
            printf("%d\n", arr[i - 1]);
        }
    }
}