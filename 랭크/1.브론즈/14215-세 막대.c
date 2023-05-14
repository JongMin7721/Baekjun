#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c)
    {
        printf("%d\n", (a + b) * 2 - 1);
    }
    else if (a + c <= b)
    {
        printf("%d\n", (a + c) * 2 - 1);
    }
    else if (b + c <= a)
    {
        printf("%d\n", (b + c) * 2 - 1);
    }
    else
    {
        printf("%d\n", a + b + c);
    }

    return 0;
}