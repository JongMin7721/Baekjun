#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second);

int main(void)
{
    int n, ar[100000], ar2[100000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &ar[i]);
    }

    qsort(ar, n, sizeof(ar[0]), compare);

    for (int i = 0; i < n; i++)
    {
        printf(" %d", ar[i]);
    }
}

int compare(const void *first, const void *second)
{
    if (*(int *)first > *(int *)second)
        return 1;
    else if (*(int *)first < *(int *)second)
        return -1;
    else
        return 0;
}

void compression()
{
}