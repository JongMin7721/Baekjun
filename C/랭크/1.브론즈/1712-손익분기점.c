#include <stdio.h>

int main(void) // 1712번
{
    unsigned int a, b, c, result = 0;
    int check = 0;
    long A;

    scanf("%u %u %u", &a, &b, &c);

    if (b >= c)
    {
        printf("-1\n");

        return 0;
    }

    result = a / (c - b) + 1;

    printf("%u\n", result);

    return 0;
}