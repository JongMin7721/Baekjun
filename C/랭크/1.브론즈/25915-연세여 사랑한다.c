#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) // 25915번
{
    char n, *password = {"ILOVEYONSEI"};
    int move = 0, cnt = 0;

    scanf("%c", &n);

    if (n >= 'a' && n <= 'z')
    {
        n = toupper(n);
    }

    for (int i = 0; i < 11; i++)
    {
        cnt = abs((int)(n - password[i]));
        n = password[i];
        move += cnt;
    }

    printf("%d\n", move);

    return 0;
}