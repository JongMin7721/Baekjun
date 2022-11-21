#include <stdio.h>

int main(void) // 2839번
{
    int n, res, set;

    scanf("%d", &n);

    res = n / 5;
    set = n % 5; //나머지

    while (set % 3 != 0)
    {
        res--;
        set += 5;

        if (n < set)
        {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n", res + set / 3);

    return 0;
}