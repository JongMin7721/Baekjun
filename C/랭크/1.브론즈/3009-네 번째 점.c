#include <stdio.h>

int main(void)
{
    int num[3][2], n, m;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &num[i][0], &num[i][1]);
    }

    if (num[0][0] == num[1][0])
    {
        n = num[2][0];
    }
    else if (num[1][0] == num[2][0])
    {
        n = num[0][0];
    }
    else if (num[0][0] == num[2][0])
    {
        n = num[1][0];
    }

    if (num[0][1] == num[1][1])
    {
        m = num[2][1];
    }
    else if (num[1][1] == num[2][1])
    {
        m = num[0][1];
    }
    else if (num[0][1] == num[2][1])
    {
        m = num[1][1];
    }

    printf("%d %d\n", n, m);
}