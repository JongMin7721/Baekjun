#include <stdio.h>

int main(void) // 1330번
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf(">");
    }
    else if (a < b)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }

    return 0;
}