#include <stdio.h>
#include <stdlib.h>

int main(void) // 10950번
{
    int a, b, c;

    scanf("%d", &a);

    int *arr = (int *)malloc(sizeof(int) * a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        arr[i] = b + c;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}