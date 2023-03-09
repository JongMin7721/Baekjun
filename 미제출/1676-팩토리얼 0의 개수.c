#include <stdio.h>
// #define DIV 100000000

int fac(int N);

int main(void)
{
    int N;

    scanf("%d", &N);

    printf("%d\n", fac(N));

    return 0;
}

int fac(int N)
{
    int cnt = 0;
    for (int i = 5; i <= N; i *= 5)
    {
        cnt += N / i;
    }

    return cnt;
}

// int fac(int N) // 정답이지만 범위가 제한된 코드
// {
//     int cnt = 0, sum = 1;
//     for (int i = 1; i <= N; i++)
//     {
//         sum = (sum * i) % DIV;

//         while (sum % 10 == 0)
//         {
//             sum /= 10;
//             cnt++;
//         }
//     }

//     return cnt;
// }