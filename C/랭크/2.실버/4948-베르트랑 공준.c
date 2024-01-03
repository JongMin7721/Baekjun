#include <stdio.h>

int eratos(int n);

int nums[246913];

int main(void) // 4948번
{
    int n, res;

    scanf("%d", &n);

    while (n)
    {
        printf("%d\n", eratos(n * 2));

        scanf("%d", &n);
    }

    return 0;
}

int eratos(int n)
{
    int res = 0;

    for (int i = 0; i < 246913; i++)
    {
        nums[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (nums[i])
        {

            for (int j = i * i; j <= n; j += i)
            {
                nums[j] = 0;
            }
        }
    }

    for (int i = n / 2 + 1; i <= n; i++)
    {
        if (nums[i])
        {
            res++;
        }
    }

    return res;
}
