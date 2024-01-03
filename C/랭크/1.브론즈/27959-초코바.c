#include <stdio.h>

int main(void)
{
    int n, cost;

    scanf("%d %d", &n, &cost);

    if (n * 100 >= cost)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}