#include <stdio.h>

int main(void)
{
    int n[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", &n[i]);
        sum += (n[i] * n[i]);
    }

    printf("%d\n", sum % 10);

    return 0;
}