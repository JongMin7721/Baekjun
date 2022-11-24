#include <stdio.h>

int s(int n); // 11653번

int main(void) // 2581번
{
    int n, m, i, min = 0, sum = 0, check = 0;

    scanf("%d\n%d", &m, &n);

    for (i = m; i <= n; i++)
    {
        if (s(i) != 0) // 1은 소수X
        {
            sum += i;     //소수면 더하기
            check++;      //소수가 있다면 1이상 없다면 0
            if (min == 0) //최소값이 아무것도 없을 때,소수일때,1이 아닐때(1은 소수X)
            {
                min = i;
            }
        }
    }

    if (check)
    {
        printf("%d\n%d\n", sum, min);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
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
                set++;
                break;
            }
        }
    }

    return set > 1 ? 0 : n;
}