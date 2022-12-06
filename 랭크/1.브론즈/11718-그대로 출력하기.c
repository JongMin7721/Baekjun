#include <stdio.h>

int main(void)
{
    char a[101];

    while (scanf(" %[^\n]s", &a) != EOF)
    {
        printf("%s\n", a);
    }

    return 0;
}