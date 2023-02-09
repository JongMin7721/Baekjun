#include <stdio.h>
#include <string.h>

int main(void)
{
    char sen[101];
    int len;

    while (strcmp(sen, ".\n") != 0)
    {
        fgets(sen, 101, stdin);
        len = strlen(sen);

        for (int i = 0; i < len; i++)
        {
        }
    }
}