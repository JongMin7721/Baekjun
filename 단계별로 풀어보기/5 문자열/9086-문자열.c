#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, l;
    char a[1001];

    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &a);
        l = strlen(a) - 1;
        printf("%c%c\n", a[0], a[l]);
    }

    return 0;
}