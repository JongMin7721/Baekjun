#include <stdio.h>

int main(void)
{
    char word[1003];
    int n;

    scanf("%s\n%d", word, &n);

    printf("%c\n", word[n - 1]);

    return 0;
}
