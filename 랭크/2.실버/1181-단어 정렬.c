#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b);

int main(void)
{
    int n;
    char word[20000][51];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", word[i]);
    }

    qsort((void *)word, n, sizeof(word[0]), compare);

    printf("%s\n", word[0]);
    for (int i = 1; i < n; i++)
    {
        if (strcmp(word[i], word[i - 1]) != 0)
        {
            printf("%s\n", word[i]);
        }
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    char *w1 = (char *)a;
    char *w2 = (char *)b;
    int n1 = strlen(w1);
    int n2 = strlen(w2);
    if (n1 < n2)
        return -1;
    else if (n1 > n2)
        return 1;
    else
    {
        return strcmp(w1, w2);
    }
}