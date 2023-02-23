#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char *ar1, char *ar2, int m);

int main(void) // 10757번
{
    char num1[10000], num1_r[10000], num2[10000], num2_r[10000], result[10001];
    int n, m, big, stack = 0, up;

    scanf("%s %s", num1, num2);
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
        result[i] = check + up + stack;
        stack = (check + stack >= 10) ? 1 : 0;
    }

    result[big] = (stack == 1) ? 1 : 0;
    big = (stack == 1) ? big + 1 : big;

    for (int i = big - 1; i >= 0; i--)
    {
        printf("%d", result[i]);
    }

    return 0;
}

void rev(char *ar1, char *ar2, int n)
{
    for (int i = 0; i < n; i++)
    {

        ar2[i] = ar1[n - i - 1];
    }
}