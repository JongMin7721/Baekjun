#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, a, zero[42], one[42];
    ;

    scanf("%d", &num);

    int *n = (int *)malloc(sizeof(int) * num * 2);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < num; i++)
    {
        zero[0] = 1;
        zero[1] = 0;
        one[0] = 0;
        one[1] = 1;

        for (int j = 0; j < n[i]; j++)
        {
            zero[j + 2] = zero[j + 1] + zero[j];
            one[j + 2] = one[j + 1] + one[j];
        }
        printf("%d %d\n", zero[n[i]], one[n[i]]);
    }

    return 0;
}
