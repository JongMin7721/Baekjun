#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;

    scanf("%d", &a);

    int *arr1 = (int *)malloc(sizeof(int) * a);
    int *arr2 = (int *)malloc(sizeof(int) * a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        arr1[i] = b;
        arr2[i] = c;
    }

    for (int i = 0; i < a; i++)
    {
        printf("Case #%d: %d + %d = %d\n", i + 1, arr1[i], arr2[i], arr1[i] + arr2[i]);
    }

    return 0;
}