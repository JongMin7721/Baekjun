#include <stdio.h>
#define DIV 1000000
#define CIR 1500000

typedef unsigned long long int ll;

int main(void)
{
    ll n;
    int arr[4];

    scanf("%llu", &n);

    arr[0] = 0;
    arr[1] = 1;

    if (!n)
    {
        printf("0\n");

        return 0;
    }
    else if (n == 1)
    {
        printf("1\n");

        return 0;
    }

    n %= CIR;

    for (ll i = 0; i < n - 1; i++)
    {
        arr[(i + 2) % 3] = arr[(i + 1) % 3] + arr[i % 3];
        arr[(i + 2) % 3] %= DIV;
        arr[(i + 1) % 3] %= DIV;
        arr[i % 3] %= DIV;
    }

    printf("%d\n", arr[n % 3]);
}