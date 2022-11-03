#include <stdio.h>

int main(void)
{
    int a[10], b, count = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b);
        for (int j = 0; j < i; j++)
        {
            if (a[j] == (b % 42))
            {
                count--;
                break;
            }
        }
        a[i] = b % 42;
        count++;
    }

    printf("%d\n", count);

    return 0;
}