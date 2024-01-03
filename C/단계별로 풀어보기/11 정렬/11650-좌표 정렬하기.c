#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} coordinate;

int compare(const void *first, const void *second);

int main(void)
{
    coordinate coord[100000];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &coord[i].x, &coord[i].y);
    }

    qsort((coordinate *)coord, n, sizeof(coordinate), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", coord[i].x, coord[i].y);
    }

    return 0;
}

int compare(const void *first, const void *second)
{
    if (((coordinate *)first)->x > ((coordinate *)second)->x)
    {
        return 1;
    }
    else if (((coordinate *)first)->x < ((coordinate *)second)->x)
    {
        return -1;
    }
    else
    {
        if (((coordinate *)first)->y > ((coordinate *)second)->y)
        {
            return 1;
        }
        else if (((coordinate *)first)->y < ((coordinate *)second)->y)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}
