#include <stdio.h>

int main(void) // 2480번
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("%d", 10000 + a * 1000);
    }
    else if (a == b)
    {
        printf("%d", 1000 + a * 100);
    }
    else if (b == c || c == a)
    {
        printf("%d", 1000 + c * 100);
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                printf("%d", 100 * a);
            }
            else
            {
                printf("%d", 100 * c);
            }
        }
        else
        {
            if (b > c)
            {
                printf("%d", 100 * b);
            }
            else
            {
                printf("%d", 100 * c);
            }
        }
    }

    return 0;
}