#include <stdio.h>

int main(void)
{
    char words[5][16] = {0}, c;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c = words[j][i];
            if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                printf("%c", c);
            }
        }
    }

    return 0;
}