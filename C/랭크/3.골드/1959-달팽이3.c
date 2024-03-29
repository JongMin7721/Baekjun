#include <stdio.h>

int main(void)
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    if (n <= m)
    {
        printf("%lld\n%lld ", (n - 1) * 2, (n + 2) / 2);
        if (n % 2)
        {
            printf("%lld\n", m - (n / 2));
        }
        else
        {
            printf("%lld\n", n / 2);
        }
    }
    else
    {
        printf("%lld\n", (m * 2) - 1);
        if (m % 2)
        {
            printf("%lld ", n - (m / 2));
        }
        else
        {
            printf("%lld ", (m / 2) + 1);
        }

        printf("%lld\n", (m + 1) / 2);
    }

    return 0;
}
// 참고자료
//// n < m
// 3 4 -> 4, 2 3
// 3 5 -> 4, 2 4
// 3 6 -> 4, 2 5
// 3 7 -> 4, 2 6

// 5 6 -> 8, 3 4
// 5 7 -> 8, 3 5

// 7 6 -> 11, 4 3

// 4 5 -> 6, 3 2
// 4 6 -> 6, 3 2
// 4 7 -> 6, 3 2

// 6 7 -> 10, 4 3

//// n > m
// 7 6 -> 11, 4 3

// 7 5 -> 9, 5 3
// 6 5 -> 9, 4 3

// 7 4 -> 7, 3 2
// 6 4 -> 7, 3 2
// 5 4 -> 7, 3 2

// 6 3 -> 5, 5 2
// 5 3 -> 5, 4 2
// 4 3 -> 5, 3 2

//// n === m
// 3 3 -> 4, 2 2
// 4 4 -> 6, 3 2
// 5 5 -> 8, 3 3
// 6 6 -> 10, 4 3
// 7 7 -> 12, 4 4
