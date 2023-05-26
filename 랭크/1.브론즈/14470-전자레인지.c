#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);

    if (a < 0)
    {
        a *= -1;
    }
    else
    {
        b = b - a;
        a = 0;
        d = 0;
    }

    printf("%d\n", d + a * c + b * e);

    return 0;
}