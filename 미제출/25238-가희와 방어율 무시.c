#include <stdio.h>

int main(void)
{
    double n, m;

    scanf("%lf %lf", &n, &m);

    if (n * (100 - m) / 100 >= 100)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}