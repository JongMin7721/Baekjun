#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        sum += n;
    }

    printf("%d\n", sum);

    return 0;
}