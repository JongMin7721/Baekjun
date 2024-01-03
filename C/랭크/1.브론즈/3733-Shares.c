#include <stdio.h>

int main(void)
{
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        n++;

        if (n > m)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", m / n);
        }
    }

    return 0;
}