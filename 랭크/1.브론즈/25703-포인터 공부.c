#include <stdio.h>

int main(void) // 25703번
{
    int n;

    scanf("%d", &n);

    printf("int a;\n");

    for (int i = 1; i <= n; i++)
    {
        printf("int ");
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        if (i == 1)
        {
            printf("ptr = &a;\n");
        }
        else if (i == 2)
        {
            printf("ptr%d = &ptr;\n", i);
        }
        else
        {
            printf("ptr%d = &ptr%d;\n", i, i - 1);
        }
    }

    return 0;
}