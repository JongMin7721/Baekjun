#include <stdio.h>

int main(void)
{
    int a, result = 0;
    scanf("%d", &a);

    for (int i = 1; i < a + 1; i++)
    {
        result += i;
    }

    printf("%d", result);

    return 0;
}