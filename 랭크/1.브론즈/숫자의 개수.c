#include <stdio.h>

int main(void)
{
    int num, sum = 1, n[10] = {0}, m;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        sum *= num;
    }

    while (sum)
    {
        m = sum % 10;
        sum /= 10;
        n[m]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}