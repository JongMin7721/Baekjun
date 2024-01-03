#include <stdio.h>

int main(void)
{
    int n, m, chair[100] = {0}, back = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf(" %d", &m);
        if (chair[m - 1])
        {
            back++;
        }
        else
        {
            chair[m - 1]++;
        }
    }

    printf("%d\n", back);

    return 0;
}