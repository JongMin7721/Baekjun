#include <stdio.h>
#include <string.h>

int main(void)
{
    char n[6];

    scanf("%s", &n);

    while (n[0] != '0')
    {
        int l = strlen(n) - 1;
        int check = 0;
        for (int i = 0; i <= l / 2; i++)
        {
            if (n[i] != n[l - i])
            {
                printf("no\n");
                check++;
                break;
            }
        }

        if (!check)
        {
            printf("yes\n");
        }

        scanf("%s", n);
    }

    return 0;
}