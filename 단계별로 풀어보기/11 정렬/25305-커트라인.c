#include <stdio.h>
#define SWAP(X, Y, T) T = X, X = Y, Y = T;

int main(void) // 25305번
{
    int n, m, ar[1000], set = 10000, tmp;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &ar[i]);
        for (int j = i; j > 0; j--)
        {
            if (ar[j] > ar[j - 1])
            {
                SWAP(ar[j], ar[j - 1], tmp);
            }
            else
            {
                break;
            }
        }
    }

    printf("%d\n", ar[m - 1]);

    return 0;
}