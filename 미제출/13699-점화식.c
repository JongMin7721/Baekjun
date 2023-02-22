#include <stdio.h>

typedef long long int ll;
int main(void)
{
    ll arr[36] = {1}, sum = 0;
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 35; i++)
    {
        for (int j = 0; j < i; j++)
        {
            arr[i] += arr[j] * arr[i - j - 1];
        }
    }

    printf("%lld\n", arr[n]);
}