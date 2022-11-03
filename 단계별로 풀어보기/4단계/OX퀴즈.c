#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*int main(void)                    //내 풀이
{
    int num, stack, score, i;
    char *c = (char *)malloc(sizeof(char) * 81);
    scanf("%d", &num);

    while (num--)
    {
        scanf("%s", c);
        i = strlen(c) + 1;
        score = 0;
        stack = 1;
        while (i--)
        {
            if (c[i - 1] == 'O')
            {
                if (i == 1)
                {
                    score += 1;
                    break;
                }

                if (c[i - 1] == c[i - 2])
                {
                    stack++;
                }
                else if (c[i - 1] != c[i - 2])
                {
                    stack = 1;
                }

                score += stack;
            }
            else
            {
                continue;
            }
        }

        printf("%d\n", score);
    }

    return 0;
}*/

int main(void) //더 짧고 쉬운 버전   (다른 사람 풀이)
{
    int n, score, stack;
    char c[81] = {0};

    scanf("%d", &n);

    while (n--)
    {
        score = stack = 0;
        scanf("%s", c);
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] == 'O')
            {
                stack++;
                score += stack;
            }
            else
            {
                stack = 0;
            }
        }
        printf("%d\n", score);
    }

    return 0;
}