#include <stdio.h>
#include <stdlib.h>
#define SWAP(X, Y, T) (T) = (X), (X) = (Y), (Y) = (T)

int arr2[10];

int static compare(const void *first, const void *second);
int cut_sum(int n, int Bob, int Alice);
int bestcase(int n, int Bob, int Alice) // 줄세우기 고민
{
    int ans_Bob, Bob2, ans_Alice = 0, pow = 1, cas = 0, tmp;
    ans_Bob = Bob2 = cut_sum(n, Bob, Alice);

    printf("ans_Bob : %d\n", ans_Bob);

    for (int i = 1; i < n; i++)
        pow *= 10;

    printf("ans_Alice : %d\n", ans_Alice);
}

int main(void)
{
    int T, n, Bob, Alice, cas;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d\n%d\n%d", &n, &Bob, &Alice);
        cas = bestcase(n, Bob, Alice);

        printf("arr2 : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr2[i]);
        }
        printf("\n");
    }
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

int cut_sum(int n, int Bob, int Alice)
{
    int rev_Bob = 0, nor_Bob = Bob;
    for (int i = 0; i < n; i++)
    {
        rev_Bob *= 10;
        rev_Bob += Bob % 10;
        Bob /= 10;
    }

    Bob = rev_Bob > nor_Bob ? nor_Bob : rev_Bob;

    for (int i = 0; i < n; i++)
    {
        arr2[Alice % 10]++;
        Alice /= 10;
    }

    return Bob;
}