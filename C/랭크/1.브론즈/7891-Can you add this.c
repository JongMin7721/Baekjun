#include <stdio.h>

int main(void)
{
    int s;
    long n, m;

    scanf("%d", &s);

    for (int i = 0; i < s; i++)
    {
        scanf("%ld %ld", &n, &m);

        printf("%ld\n", n + m);
    }

    return 0;
}