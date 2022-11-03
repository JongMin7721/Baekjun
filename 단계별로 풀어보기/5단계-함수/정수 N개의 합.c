#include <stdio.h>

long long sum(int *a, int n);

int main(void)
{
    int a[1000000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }

    printf("%lld", sum(a, n));

    return 0;
}

long long sum(int *a, int n)
{
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }

    return ans;
}