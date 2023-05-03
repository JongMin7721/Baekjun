#include <stdio.h>

int main(void)
{
    int n, B, r, index = 0, nn;
    char result[50];

    scanf("%d %d", &n, &B);

    while (n > 0)
    {
        r = n % B;
        n /= B;

        if (r > 10)
        {
            r += 55;
        }
        else
        {
            r += 48;
        }

        result[index++] = r;
    }

    printf("%s\n", result);

    return 0;
}