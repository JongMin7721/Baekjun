#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, i = 0, len;
    char num[10] = "666";

    scanf("%d", &N);

    for (int j = 3; j < 10; j++)
    {
        num[j] = '0';
    }

    while (i != N)
    {
        len = strlen(num);

        for (int j = 0; j < len - 2; j++)
        {
            if (num[j] == num[j + 1] && num[j + 1] == num[j + 2] && num[j] == '6')
            {
                i++;
                break;
            }
        }

        if (i == N)
        {
            break;
        }

        num[0]++;

        for (int j = 0; j < len; j++)
        {
            if (num[j] == (10 + '0'))
            {
                num[j] -= 10;
                num[j + 1]++;
            }
        }
    }

    char res[10];
    int chk = 0;

    for (i = 0; i < 10; i++)
    {
        res[i] = num[9 - i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (res[i] == '0' && !chk)
        {
            continue;
        }
        else
        {
            printf("%c", res[i]);
            chk = 1;
        }
    }
    printf("\n");

    return 0;
}