#include <stdio.h>

int main(void) // 10871번
{
    int a, b, c;

    scanf("%d %d", &a, &b);

    while (a--)
    {
        scanf("%d", &c);
        if (c < b)
        {
            printf("%d ", c);
        }
    }

    return 0;
}