#include <stdio.h>
#include <stdlib.h>
#define SWAP(X, Y, T) (T) = (X), (X) = (Y), (Y) = (T)

int ans_Alice, max;

int static compare(const void *first, const void *second);
int cut_sum(int n, int Bob);
void per(char Alice[9], int depth, int r, int n, int Bob);
int bestcase(int n, int Bob, char Alice[9]);

int main(void)
{
    int T, n, Bob, cas;
    char Alice[9];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d\n%d\n%s", &n, &Bob, &Alice);
        cas = bestcase(n, Bob, Alice);
        if (max == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                printf("%c", Alice[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d\n", max);
        }
    }
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

int cut_sum(int n, int Bob)
{
    int rev_Bob = 0, nor_Bob = Bob;
    for (int i = 0; i < n; i++)
    {
        rev_Bob *= 10;
        rev_Bob += Bob % 10;
        Bob /= 10;
    }

    Bob = rev_Bob > nor_Bob ? nor_Bob : rev_Bob;

    return Bob;
}

void per(char Alice[9], int depth, int r, int n, int Bob)
{
    if (depth == r)
    {
        if (atoi(Alice) > max && atoi(Alice) < Bob)
        {
            max = atoi(Alice);
            return;
        }
    }

    for (int i = depth; i < n; i++)
    {
        char tmp = Alice[depth];
        Alice[depth] = Alice[i];
        Alice[i] = tmp;

        per(Alice, depth + 1, r, n, Bob);

        Alice[i] = Alice[depth];
        Alice[depth] = tmp;
    }
}

int bestcase(int n, int Bob, char Alice[9])
{
    int ans_Bob, Bob2, ans_Alice = 0, pow = 1, cas = 0, tmp, i;
    ans_Bob = Bob2 = cut_sum(n, Bob);

    for (int i = 1; i < n; i++)
        pow *= 10;

    qsort(Alice, n, sizeof(Alice[0]), compare);

    max = 0;
    per(Alice, 0, n, n, ans_Bob);
}