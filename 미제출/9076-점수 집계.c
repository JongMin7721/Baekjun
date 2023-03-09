#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second);
int check_score(int score[5]);

int main(void)
{
    int T, score[5];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf(" %d", &score[j]);
        }

        qsort(score, 5, sizeof(score[0]), compare);

        if (!check_score(score))
        {
            printf("KIN\n");
        }
        else
        {
            printf("%d\n", check_score(score));
        }
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

int check_score(int score[5])
{
    int a = score[1], b = score[3], big, small;
    if (a > b)
    {
        big = a;
        small = b;
    }
    else
    {
        big = b;
        small = a;
    }

    if (big - small >= 4)
    {
        return 0;
    }
    else
    {
        return score[1] + score[2] + score[3];
    }
}