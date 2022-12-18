#include <stdio.h>

int main(void)
{
    int n, fib[46];
    fib[1] = 1;
    fib[2] = 1;
    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%d\n", fib[n]);

    return 0;
}