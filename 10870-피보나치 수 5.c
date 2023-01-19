#include <stdio.h>

int main(void)
{
    int n, arr[21];
    arr[0] = 0;
    arr[1] = 1;

    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
    }

    printf("%d\n", arr[n]);
}