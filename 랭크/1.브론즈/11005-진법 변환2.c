#include <stdio.h>

int main(void)
{
    int n, B, r, index = 0;
    char result[50];

    scanf("%d %d", &n, &B);

    while (n > 0)
    {
        r = n % B;
        n /= B;

        if (r > 9)
        {
            result[index++] = r + 55;
        }
        else
        {
            result[index++] = r + 48;
        }
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}