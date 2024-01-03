#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 14

int compare(const void *first, const void *second);

int main(void)
{
    char num[MAX];

    scanf("%s", num);

    qsort(num, strlen(num), sizeof(char), compare);

    printf("%s\n", num);

    return 0;
}

int compare(const void *first, const void *second)
{
    if (*(char *)first < *(char *)second)
        return 1;
    else if (*(char *)first > *(char *)second)
        return -1;
    else
        return 0;
}