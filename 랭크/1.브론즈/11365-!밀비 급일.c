#include <stdio.h>
#include <string.h>

int main(void)
{
    char sen[502], c[2] = "\n";
    int len;

    scanf(" %[^\n]", sen);

    while (strcmp(sen, "END"))
    {

        len = strlen(sen);

        for (int i = len - 1; i >= 0; i--)
        {
            printf("%c", sen[i]);
        }
        printf("\n");

        scanf(" %[^\n]", sen);
    }

    return 0;
}