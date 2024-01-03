#include <stdio.h>

int main(void)
{
    char a[3];

    scanf(" %s", &a);

    for (int i = 0; i < 3; i++)
    {
        printf("%c", a[2 - i]);
    }
    printf("\n");

    return 0;
}