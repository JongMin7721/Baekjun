#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *str = (char *)malloc(sizeof(char) * 1000000);
    int cnt[26] = {0}, max = 0, num, n;

    scanf("%s", str);
    n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if (islower(str[i]))
        {
            str[i] -= 32;
        }

        num = (int)str[i] - 'A';
        cnt[num]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[max] < cnt[i])
        {
            max = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[max] == cnt[i] && max != i)
        {
            printf("?\n");
            return 0;
        }
    }

    printf("%c\n", (char)max + 'A');

    return 0;
}