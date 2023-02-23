#include <stdio.h>

int s(int n); // 11653번

int main(void) // 1978번
{
    int n, m, res = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &m);
        res += s(m) != 0 ? 1 : 0;
    }

    printf("%d\n", res);
}

int s(int n) //소인수분해 후 값이 없으면 소수
{
    if (n == 1) // 1은 소수가 아님
    {
        return 0;
    }

    int set = 0;
    while (n != 1)
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                n /= i;
                set++; //소수가 아니면 1이상
                break;
            }
        }
    }

    return set > 1 ? 0 : n; //소수면 n, 소수가 아니면 0
}