#include <stdio.h>

int main(void)
{
    int n, big1 = 0, big2 = 0, tmp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);

        if (big1 <= n)
        {
            big1 = n;
        }

        if (big2 <= big1)
        {
            tmp = big2;
            big2 = big1;
            big1 = tmp;
        }
    }

    printf("%d\n", big1);

    return 0;
}