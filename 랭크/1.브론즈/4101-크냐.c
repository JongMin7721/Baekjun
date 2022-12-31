#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    while (n || m)
    {

        if (n > m)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

        scanf("%d %d", &n, &m);
    }

    return 0;
}