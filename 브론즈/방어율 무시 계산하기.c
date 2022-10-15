#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    double result = 0;
    scanf("%d", &num);

    double *arr = (double *)malloc(num * sizeof(double));

    for (int i = 0; i < num; i++)
    {
        scanf(" %lf", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        result = 1 - (1 - result) * (1 - arr[i] / 100);
        printf("%lf\n", result * 100);
    }

    return 0;
}