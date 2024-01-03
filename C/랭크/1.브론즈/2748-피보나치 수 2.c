#include <stdio.h>

int main(void)
{
    int n;
    long long int arr[91];
    arr[0] = 0;
    arr[1] = 1;

    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        arr[i + 2] = arr[i + 1] + arr[i];
    }

    printf("%lld\n", arr[n]);

    return 0;
}