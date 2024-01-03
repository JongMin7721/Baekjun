#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (b == c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", a);
    }

    return 0;
}