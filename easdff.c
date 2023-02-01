#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second);

int main(void)
{
    int n, m, arr1[500000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr1[i]);
    }

    qsort(arr1, n, sizeof(arr1[0]), compare);
}

int static compare(const void *first, const void *second)
{
    if (*(int *)first > *(int *)second)
        return -1;
    else if (*(int *)first < *(int *)second)
        return 1;
    else
        return 0;
}