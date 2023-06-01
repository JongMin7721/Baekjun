#include <stdio.h>
#define PI 3.141592

int main(void)
{
    double n1, n2;

    scanf("%lf\n%lf", &n1, &n2);

    printf("%lf\n", n2 * 2 * PI + 2 * n1);

    return 0;
}