#include <stdio.h>
#include <string.h>

int main(void)
{
    char sen[102];
    int n;

    scanf("%s", sen);

    n = strlen(sen);

    for (int i = 0; i < n / 2; i++)
    {
        if (sen[i] != sen[n - i - 1])
        {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");

    return 0;
}