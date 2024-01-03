#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int len;
    char num[5];

    scanf("%s", num);

    len = strlen(num);

    if (len == 2)
    {
        int n1 = num[0] - 48, n2 = num[1] - 48;
        printf("%d\n", n1 + n2);
    }
    else if (len == 4)
    {
        printf("20\n");
    }
    else
    {
        if (num[1] == '0')
        {
            int n1 = num[2] - 48;
            printf("%d\n", 10 + n1);
        }
        else if (num[2] == '0')
        {
            int n1 = num[0] - 48;
            printf("%d\n", 10 + n1);
        }
    }

    return 0;
}