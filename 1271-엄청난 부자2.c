#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char money[1001], count[1001], result[1001];
    int mlen, len;

    scanf("%s %s", &money, &count);

    mlen = strlen(money);
    len = strlen(count);

    for (int i = 0; i < mlen - len + 1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            money[i + j] == count[j] ? continue : 1;
        }
    }
}