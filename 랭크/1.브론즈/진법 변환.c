#include <stdio.h>
#include <string.h>

int convert(char cha);

int main(void)
{
    char num[50];
    int B, len, result = 0, pl, up = 1;

    scanf("%s %d", num, &B);

    len = strlen(num);

    for (int i = len - 1; i >= 0; i--)
    {
        pl = convert(num[i]);

        result += pl * up;
        up *= B;
    }

    printf("%d\n", result);

    return 0;
}

int convert(char cha)
{
    if (cha >= '0' && cha <= '9')
    {
        return cha - 48;
    }
    else if (cha >= 'A' && cha <= 'Z')
    {
        return cha - 55;
    }

    return 0;
}