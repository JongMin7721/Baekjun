#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rev(char *ar1, char ar2[10000], int m);
void plus(char num1[10000], char num2[10000], char result[10001]);

int main(void)
{
    int n;
    char num1[10000], num2[10000], num3[10001];

    strcpy(num1, "0");
    strcpy(num2, "1");

    scanf("%d", &n);

    if (!n)
    {
        printf("0\n");

        return 0;
    }
    else if (n == 1)
    {
        printf("1\n");

        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        plus(num1, num2, num3);
        // printf("num1:%s num2:%s result:%s\n", num1, num2, num3);
        strcpy(num1, num2);
        strcpy(num2, num3);
    }

    printf("%s\n", num3);
}

void plus(char num1[10000], char num2[10000], char result[10001])
{
    char num1_r[10000], num2_r[10000], result_r[10001];
    int n, m, big, stack = 0, up;

    n = strlen(num1);
    m = strlen(num2);

    big = n >= m ? n : m;

    rev(num1, num1_r, n);
    rev(num2, num2_r, m);

    for (int i = 0; i < big; i++)
    {
        int check;

        if (num1_r[i] == 0)
        {
            check = num2_r[i] - '0';
        }
        else if (num2_r[i] == 0)
        {
            check = num1_r[i] - '0';
        }
        else
        {
            check = num1_r[i] - '0' + num2_r[i] - '0';
        }

        up = check + stack >= 10 ? -10 : 0;
        result_r[i] = check + up + stack;
        stack = (check + stack >= 10) ? 1 : 0;
    }

    result_r[big] = (stack == 1) ? 1 : 0;
    big = (stack == 1) ? big + 1 : big;

    for (int i = big - 1; i >= 0; i--)
    {
        result_r[i] += '0';
    }

    rev(result_r, result, strlen(result_r));

    return;
}

void rev(char *ar1, char ar2[10000], int n)
{
    for (int i = 0; i < n; i++)
    {

        ar2[i] = ar1[n - i - 1];
    }
}