#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CoN(char money[1002], char count[1002], int len, int i);
void division(char money[1002], char count[1002], char result[1002], int len, int i);

int main(void)
{
    char money[1002], count[1002], result[1002] = {0};
    int mlen, len;

    scanf("%s %s", &money, &count);

    if (!strcmp(count, "0"))
    {
        return -1;
    }

    if (strlen(money) == strlen(count))
    {
        if (strcmp(money, count) < 0)
        {
            return -1;
        }
    }
    else if (strlen(money) < strlen(count))
    {
        return -1;
    }

    mlen = strlen(money);
    len = strlen(count);

    for (int i = 0; i < mlen; i++)
    {
        if (!(money[i] >= '0') || !(money[i] <= '9'))
        {
            return -1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (!(count[i] >= '0') || !(count[i] <= '9'))
        {
            return -1;
        }
    }

    for (int i = 0; i < mlen - len + 1; i++)
    {
        division(money, count, result, len, i);
    }

    int dd;
    for (dd = 0; result[dd] == '0'; dd++)
        ;

    if (dd == strlen(result))
        printf("0\n");
    else
        printf("%s\n", result + dd);

    int cc;
    for (cc = 0; money[cc] == '0'; cc++)
        ;

    if (cc == mlen)
        printf("0\n");
    else
        printf("%s\n", money + cc);

    return 0;
}

int CoN(char money[1002], char count[1002], int len, int i)
{
    return strncmp(money + i, count, len);
}

void division(char money[1002], char count[1002], char result[1002], int len, int i)
{
    int check = CoN(money, count, len, i), num, sum = 0;

    if ((int)money[i - 1] != '0' && i > 0)
    {
        money[i] = money[i] + (money[i - 1] - '0') * 10;
        money[i - 1] = '0';
    }

    while (1)
    {
        check = CoN(money, count, len, i);
        if (check == 0)
        {
            for (int j = 0; j < len; j++)
            {
                money[i + j] = '0';
            }
            sum++;
        }
        else if (check > 0)
        {
            for (int j = 0; j < len; j++)
            {
                num = money[i + j] - count[j];

                if (num < 0)
                {
                    num += 10;
                    money[i + j - 1] = money[i + j - 1] - 1;
                }

                money[i + j] = num + '0';
            }
            sum++;
        }
        else
        {
            result[i] = sum + '0';

            return;
        }
    }
}