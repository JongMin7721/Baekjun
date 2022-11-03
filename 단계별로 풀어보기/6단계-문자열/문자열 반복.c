#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, r;
    char c[20];

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %s", &r, c);
        for (int i = 0; i < strlen(c); i++)
        {
            for (int j = 0; j < r; j++)
            {
                printf("%c", c[i]);
            }
        }
        printf("\n");
    }

    return 0;
}