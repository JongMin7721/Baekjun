#include <stdio.h>

int main(void) // 10818번
{
    int a, b, max = -1000000, min = 1000000;

    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        scanf(" %d", &a);
        if (a < min)
        {
            min = a;
        }
        if (a > max)
        {
            max = a;
        }
    }

    printf("%d %d", min, max);

    return 0;
}