#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *word = (char *)malloc(sizeof(char) * 102);
    int alpha[34] = {0};

    scanf("%s", word);

    int n = strlen(word);
    int m, total = 0;

    for (int i = 0; i < n; i++)
    {
        m = (int)word[i] - 'a';
        switch (word[i])
        {
        case 'c':
            if (word[i + 1] == '=')
            {
                i++;
                alpha[26]++;
            }
            else if (word[i + 1] == '-')
            {
                i++;
                alpha[27]++;
            }
            else
            {
                alpha[m]++;
            }
            break;
        case 'd':
            if (word[i + 1] == 'z' && word[i + 2] == '=')
            {
                i += 2;
                alpha[28]++;
            }
            else if (word[i + 1] == '-')
            {
                i++;
                alpha[29]++;
            }
            else
            {
                alpha[m]++;
            }
            break;
        case 'l':
            if (word[i + 1] == 'j')
            {
                i++;
                alpha[30]++;
            }
            else
            {
                alpha[m]++;
            }
            break;
        case 'n':
            if (word[i + 1] == 'j')
            {
                i++;
                alpha[31]++;
            }
            else
            {
                alpha[m]++;
            }
            break;
        case 's':
            if (word[i + 1] == '=')
            {
                i++;
                alpha[32]++;
            }
            else
            {
                alpha[m]++;
            }
            break;
        case 'z':
            if (word[i + 1] == '=')
            {
                i++;
                alpha[33]++;
            }
            else
            {
                alpha[m]++;
            }
            break;
        default:
            alpha[m]++;
            break;
        }
    }

    for (int i = 0; i < 34; i++)
    {
        if (alpha[i])
        {
            total += alpha[i];
        }
    }

    printf("%d\n", total);
}