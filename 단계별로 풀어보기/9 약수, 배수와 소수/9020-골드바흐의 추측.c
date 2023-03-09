#include <stdio.h>

void eratos();
void check_era(int n);

int nums[10001];

int main(void) // 9020번
{
    int t, n;
    eratos();

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        check_era(n);
    }

    return 0;
}

void eratos()
{
    for (int i = 2; i < 10001; i++)
    {
        nums[i] = 1;
    }

    for (int i = 2; i * i <= 10000; i++)
    {
        if (nums[i])
        {
            for (long int j = i * i; j <= 10000; j += i)
            {
                nums[j] = 0;
            }
        }
    }
}

void check_era(int n)
{
    int m = n / 2;
    for (int i = 0; i < m; i++)
    {
        if (nums[m - i] && nums[m + i])
        {
            printf("%d %d\n", m - i, m + i);
            break;
        }
    }
}