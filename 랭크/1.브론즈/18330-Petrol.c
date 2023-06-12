#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d\n%d", &a, &b);

    if (b + 60 >= a)
    {
        printf("%d\n", 1500 * a);
    }
    else
    {
        printf("%d\n", 1500 * (b + 60) + 3000 * (a - b - 60));
    }

    return 0;
}