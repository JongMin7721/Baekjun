#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n >= 12 && n <= 16 && !m)
    {
        printf("320\n");
    }
    else
    {
        printf("280\n");
    }

    return 0;
}