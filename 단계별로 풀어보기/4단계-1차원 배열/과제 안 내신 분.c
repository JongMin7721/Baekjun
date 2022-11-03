#include <stdio.h>

int main(void)
{
    int a[30] = {0}, b;

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &b);
        a[b - 1] = 1;
    }

    for (int i = 0; i < 30; i++)
    {
        if (!a[i])
        {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}