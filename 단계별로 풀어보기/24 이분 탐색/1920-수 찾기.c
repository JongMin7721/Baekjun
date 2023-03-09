#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second);
int findkey(long *ar, long key, int n);

int main(void)
{
    int n, m;
    long ar1[100000] = {0}, key;

    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %ld", &ar1[i]);
    }

    qsort(ar1, n, sizeof(ar1[0]), compare);

    scanf(" %d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf(" %ld", &key);
        printf("%d\n", findkey(ar1, key, n));
    }

    return 0;
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

int findkey(long *ar, long key, int n)
{
    int middle = n / 2, start = 0, end = n;
    while (key != ar[middle])
    {
        if (middle == start)
        {
            return 0;
        }

        if (key > ar[middle])
        {
            start = middle;
        }
        else if (key < ar[middle])
        {
            end = middle;
        }

        middle = (start + end) / 2;
    }

    return 1;
}