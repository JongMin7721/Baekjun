#include <stdio.h>
#include <stdlib.h>

typedef struct coordd
{
    int age, num;
    char name[101];
} coordinate;

int compare(const void *first, const void *second);

int main(void) // VSCode에서는 실행되지 않지만((10만 * 101 char)메모리초과?) 백준에서는 정답
{
    coordinate coord[100000];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &coord[i].age, &coord[i].name);
        coord[i].num = i;
    }

    qsort((coordinate *)coord, n, sizeof(coordinate), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", coord[i].age, coord[i].name);
    }

    return 0;
}

int compare(const void *first, const void *second)
{
    if (((coordinate *)first)->age > ((coordinate *)second)->age)
    {
        return 1;
    }
    else if (((coordinate *)first)->age < ((coordinate *)second)->age)
    {
        return -1;
    }
    else
    {
        if (((coordinate *)first)->num > ((coordinate *)second)->num)
        {
            return 1;
        }
        else if (((coordinate *)first)->num < ((coordinate *)second)->num)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}
