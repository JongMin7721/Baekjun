#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, len, check;
    char VPS[51];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%s", VPS);

        len = strlen(VPS);
        check = 0;

        for (int j = 0; j < len; j++)
        {
            if (VPS[j] == '(')
            {
                check++;
            }
            else if (VPS[j] == ')')
            {
                check--;
            }

            if (check < 0)
            {
                printf("NO\n");
                break;
            }
        }

        if (check == 0)
        {
            printf("YES\n");
        }
        else if (check > 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}