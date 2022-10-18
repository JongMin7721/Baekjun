#include <stdio.h>

int main(void)
{
    int a, max = -1, max_index;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
            max_index = i;
        }
    }

    printf("%d\n%d\n", max, max_index + 1);
    return 0;
}