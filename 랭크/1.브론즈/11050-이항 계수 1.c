#include <stdio.h>

int main(void)
{
    int n, m, fac[11];
    scanf("%d %d", &n, &m);
    fac[0] = 1;
    fac[1] = 1;

    for (int i = 1; i <= n; i++)
    {
        fac[i] = fac[i - 1] * i;
    }

    printf("%d\n", fac[n] / (fac[m] * fac[n - m]));

    return 0;
}
