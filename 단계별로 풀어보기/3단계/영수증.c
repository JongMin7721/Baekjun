#include <stdio.h>

int main(void)
{
    int a, b, x, y, result = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    while (y--)
    {
        scanf("%d %d", &a, &b);
        result += a * b;
    }

    if (result == x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}