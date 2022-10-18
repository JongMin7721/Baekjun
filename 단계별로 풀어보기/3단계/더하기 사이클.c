#include <stdio.h>

int main(void)
{
    int a, b, c, d, aa, test = 0;
    scanf("%d", &a);

    b = a;
    if (a == 0)
    {
        test++;
        printf("%d", test);
        return 0;
    }
    else if (a < 0)
    {
        return -1;
    }
    else if (a < 10)
    {
        test++;
        a *= 11;
    }

    while (d != b)
    {
        test++;
        c = a / 10 + a % 10;
        d = c % 10 + (a % 10) * 10;
        a = d;
    }
    printf("%d", test);

    return 0;
}