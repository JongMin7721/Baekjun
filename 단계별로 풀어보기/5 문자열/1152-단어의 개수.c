#include <stdio.h>
#include <string.h>

int main(void) // 1152번
{
    char a[1000000], *tk;
    int stack = 0;

    scanf("%[^\n]", a);

    tk = strtok(a, " ");
    while (tk != NULL)
    {
        tk = strtok(NULL, " ");
        stack++;
    }

    printf("%d", stack);

    return 0;
}