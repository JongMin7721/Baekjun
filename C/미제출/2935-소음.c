#include <stdio.h>

int main(void)
{
    char b;
    int a, c;

    scanf("%d\n%c\n%d", &a, &b, &c);

    if (b == '+')
    {
        printf("%d\n", a + c);
    }
    else if (b == '*')
    {
        printf("%d\n", a * c);
    }

    return 0;
}